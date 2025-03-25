#include <stdio.h>
#include <string.h>
#include <dirent.h>

void remove_all_files(const char *path) {
    printf("%s\n", path);
    DIR *dir = opendir(path);
    struct dirent *entry;
    char filepath[512];

    if (dir == NULL) {
        perror("Nie mozna otworzyc pliku");
        return;
    }

    while ((entry = readdir(dir)) != NULL) {
        if (strcmp(entry->d_name, ".") == 0 || strcmp(entry->d_name, "..") == 0) {
            continue;
        }
        snprintf(filepath,sizeof(filepath), "%s/%s", path, entry->d_name);
        remove(filepath);
        printf("Usunalem %s\n", entry->d_name);
    }
    closedir(dir);
}

void reverse_string(char *str) {
    int len = strlen(str);
    for (int i = 0; i < len / 2; i++) {
        char temp = str[i];
        str[i] = str[len - i - 1];
        str[len - i - 1] = temp;
    }
}

void remove_extension(char *filename) {
    char *dot = strrchr(filename, '.');
    if (dot != NULL) {
        *dot = '\0';
    }
}

int main(void)
{
    char src_dir[256] = "C:\\Kubiszon\\Studia\\Sem4\\SysOpy\\sysopRepo\\lab3\\testFiles";
    char dst_dir[256] = "C:\\Kubiszon\\Studia\\Sem4\\SysOpy\\sysopRepo\\lab3\\testResults";

    // printf("Podaj ścieżkę do katalogu źródłowego: ");
    // scanf("%255s", src_dir);

    // printf("Podaj ścieżkę do katalogu wynikowego: ");
    // scanf("%255s", dst_dir);

    remove_all_files(dst_dir);

    DIR *dir;
    struct dirent *entry;

    dir = opendir(src_dir);
    if (dir == NULL) {
        perror("Nie można otworzyć katalogu");
        return 1;
    }

    while ((entry = readdir(dir)) != NULL) {
        if (strcmp(entry->d_name, ".") == 0 || strcmp(entry->d_name, "..") == 0) {
            continue;
        }

        if (strstr(entry->d_name, ".txt") != NULL) {
            printf("Plik tekstowy: %s\n", entry->d_name);

            char filePath[256];
            sprintf(filePath, "%s/%s", src_dir, entry->d_name);
            FILE *file = fopen(filePath, "r");
            if (file == NULL) {
                perror("Nie mozna otworzyć pliku");
                return 1;
            }

            char filename_without_extension[256];
            strcpy(filename_without_extension, entry->d_name);
            remove_extension(filename_without_extension);

            char newFilePath[256];
            snprintf(newFilePath, sizeof(newFilePath), "%s/%s_reversed.txt", dst_dir, filename_without_extension);
            FILE *newFile = fopen(newFilePath, "w");
            if (newFile == NULL) {
                perror("Nie mozna utworzyć pliku wynikowego");
                return 1;
            }

            char line[512];
            while (fgets(line, sizeof(line), file) != NULL) {
                line[strcspn(line, "\n")] = 0;

                reverse_string(line);

                fprintf(newFile, "%s\n", line);
            }
            fclose(file);
            fclose(newFile);
        }
    }

    closedir(dir);
    return 0;
}
