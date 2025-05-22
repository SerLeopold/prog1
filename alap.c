#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>

#define VERZIÓ "1.0"

typedef struct {
    const char *nev;
    const char *fajlnev;
    const char **sorok;
} Sablon;

/* Sablon forráskód sorai */
static const char *c_sorok[] = {
    "#include <stdio.h>",
    "", 
    "int main()", 
    "{", 
    "    printf(\"Hello World!\\n\");", 
    "    return 0;", 
    "}",
    NULL
};

static const char *cpp_sorok[] = {
    "#include <iostream>",
    "using namespace std;",
    "", 
    "int main()", 
    "{", 
    "    cout << \"Hello World!\" << endl;", 
    "    return 0;", 
    "}",
    NULL
};

static const char *java_sorok[] = {
    "public class Main {", 
    "    public static void main(String[] args) {", 
    "        System.out.println(\"Hello World!\");", 
    "    }", 
    "}",
    NULL
};

static const char *sh_sorok[] = {
    "#!/bin/sh", 
    "echo \"Hello World!\"", 
    NULL
};

/* Elérhető sablonok */
static const Sablon sablonok[] = {
    { "c",   "main.c",   c_sorok   },
    { "cpp", "main.cpp", cpp_sorok },
    { "java","Main.java", java_sorok },
    { "sh",  "main.sh",  sh_sorok  }
};
static const int sablonok_db = sizeof(sablonok) / sizeof(sablonok[0]);

void kiir_segitseg(const char *program) {
    printf("Használat: %s <sablon_id>... [opciók]\n", program);
    printf("Opciók:\n");
    printf("  -h, --help       segítő üzenet\n");
    printf("  -v, --version    verzió info\n");
    printf("  --stdout         forráskód konzolra \n\n");
    printf("Elérhető sablonok:\n");
    for (int i = 0; i < sablonok_db; ++i) {
        const char *nyelv = strcmp(sablonok[i].nev, "sh") == 0 ? "Bash" :
                            strcmp(sablonok[i].nev, "cpp") == 0 ? "C++" :
                            strcmp(sablonok[i].nev, "java") == 0 ? "Java" :
                            "C";
        printf("* %-4s - %s forrás [%s]\n",
               sablonok[i].nev, nyelv, sablonok[i].fajlnev);
    }
}

const Sablon* keres_sablon(const char *id) {
    for (int i = 0; i < sablonok_db; ++i) {
        if (strcmp(id, sablonok[i].nev) == 0) {
            return &sablonok[i];
        }
    }
    return NULL;
}

int main(int argc, char *argv[]) {
    int mutat_segitseg = 0, mutat_verzio = 0, konzol_kimenet = 0;
    const char *kivalasztott_sablonok[argc];
    int kivalasztott_szama = 0;

    for (int i = 1; i < argc; ++i) {
        if (strcmp(argv[i], "-h") == 0 || strcmp(argv[i], "--help") == 0) {
            mutat_segitseg = 1;
        } else if (strcmp(argv[i], "-v") == 0 || strcmp(argv[i], "--version") == 0) {
            mutat_verzio = 1;
        } else if (strcmp(argv[i], "--stdout") == 0) {
            konzol_kimenet = 1;
        } else if (argv[i][0] == '-') {
            fprintf(stderr, "Ismeretlen opció: %s\n", argv[i]);
            return 1;
        } else {
            kivalasztott_sablonok[kivalasztott_szama++] = argv[i];
        }
    }

    if (mutat_segitseg || kivalasztott_szama == 0) {
        kiir_segitseg(argv[0]);
        return 0;
    }
    if (mutat_verzio) {
        printf("%s\n", VERZIÓ);
        return 0;
    }

    for (int i = 0; i < kivalasztott_szama; ++i) {
        const Sablon *s = keres_sablon(kivalasztott_sablonok[i]);
        if (!s) {
            fprintf(stderr, "Ismeretlen sablon: %s\n", kivalasztott_sablonok[i]);
            continue;
        }

        if (konzol_kimenet) {
            for (const char **sor = s->sorok; *sor; ++sor) {
                puts(*sor);
            }
        } else {
            if (access(s->fajlnev, F_OK) == 0) {
                fprintf(stderr, "Hiba: fájl '%s' már létezik.\n", s->fajlnev);
                for (const char **sor = s->sorok; *sor; ++sor) puts(*sor);
                continue;
            }

            FILE *f = fopen(s->fajlnev, "w");
            if (!f) { perror("fopen"); continue; }
            for (const char **sor = s->sorok; *sor; ++sor) {
                fprintf(f, "%s\n", *sor);
            }
            fclose(f);
            printf("'%s' létrejött\n", s->fajlnev);
        }
    }

    return 0;
}
