#include <stdio.h>
#include <string.h>

void Todo_Minuscula(char *str) {
    for (int i = 0; str[i]; i++) {
        if (str[i] >= 'A' && str[i] <= 'Z') {
            str[i] = str[i] + ('a' - 'A');  
        }
    }
}

void Hacer_Bonitas_Las(char *str) {
    if (str[0] >= 'a' && str[0] <= 'z') {
        str[0] = str[0] - ('a' - 'A');  
    }
}


int main()
{
    int cantidad = 0, c = 0, i, j, k, espacio = 0;
    char user_input[1000], p[300][300], string1[300], palabras_unicas[300][300];

    printf("Ingresa el texto: ");
    scanf(" %[^\n]s", user_input);

    for (i = 0; i < strlen(user_input); i++)
    {
        if ((user_input[i] == ' ') || (user_input[i] == ',' && user_input[i+1] == ' ') || (user_input[i] == '&')) 
														  
        {
            espacio++;
        }
    }

    for (i = 0, j = 0, k = 0; j < strlen(user_input); j++)
    {
        if ((user_input[j] == ' ') || (user_input[j] == ',') || (user_input[j] == '.'))
        {    
	    if (k > 0) {
                p[i][k] = '\0';
                i++;
	    }
            k = 0;
        }        
        else
            p[i][k++] = user_input[j];
    }

    k = 0;

    for (i = 0; i <= espacio; i++) {
        Todo_Minuscula(p[i]); 
    }

    for (i = 0; i <= espacio; i++)
    {
        for (j = 0; j <= espacio; j++)
        {
            if (i == j)
            {
                strcpy(palabras_unicas[k], p[i]);
                k++;
                cantidad++;

                break;
            }
            else
            {
                if (strcmp(palabras_unicas[j], p[i]) != 0)
                    continue;
                else
                    break;
            }
        }
    }

    for (i = 0; i < cantidad; i++) 
    {
        for (j = 0; j <= espacio; j++)
        {
            if (strcmp(palabras_unicas[i], p[j]) == 0)
                c++;
        }

	Hacer_Bonitas_Las(palabras_unicas[i]);
        printf("%s - %d veces\n", palabras_unicas[i], c);
        c = 0;
    }
}

