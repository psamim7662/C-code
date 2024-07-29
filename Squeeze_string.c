// #include<stdio.h>
// #include<string.h>
// #include<stdbool.h>

// void remove_consecutive_spaces(char * string);

// int main(void){
//     char string[]="String with consecutive spaces.";
//     printf("Before squeezing:%s\n",string);
//     remove_consecutive_spaces(string);
//     printf("After squeezing:%s\n",string);

//     return 0;

// }
// void remove_space(char * string){
//     int length=strlen(string);
//     int j=0;
//     bool last_char_not_space=true;
//     for(int i=0;i<length;i++)
//     {
//        if(string[i]!=' '||last_char_not_space)
//        {
//         string[j]=string[i];
//         j++;
//        }
//       else if (!last_char_was_space) {
//             string[j++] = string[i];
//             last_char_was_space = true;
//         }
//     }

// }
#include <stdio.h>
#include <string.h>
#include <stdbool.h>

void remove_consecutive_spaces(char *string);

int main(void) {
    char string[] = "String  with   consecutive    spaces.";
    printf("Before squeezing: '%s'\n", string);
    remove_consecutive_spaces(string);
    printf("After squeezing: '%s'\n", string);

    return 0;
}

void remove_consecutive_spaces(char *string) {
    int i, j = 0;
    bool last_char_was_space = false;

    for (i = 0; string[i] != '\0'; i++) {
        if (string[i] != ' ') {
            string[j++] = string[i];
            last_char_was_space = false;
        } else if (!last_char_was_space) {
            string[j++] = string[i];
            last_char_was_space = true;
        }
    }

    // Null-terminate the modified string
    string[j] = '\0';
}
