#include <stdio.h>
#include <stdlib.h>
#include <string.h>


void num_1(char* Str)
{
   char str[] = "ya hochu pitsu";

   int len = 0, i = 0, j = 0;
   while (str[len])
      ++len;

   j = len;
   while (i < j--)
   {
      char str2 = str[i];
      str[i++] = str[j];
      str[j] = str2;
   }

   i = 0;
   while (str[i])
   {

      while (str[i] == ' ')
         ++i;

      j = i;
      while (str[j] && str[j] != ' ')
         ++j;

      int last = j;
      while (i < j--)
      {
         char str2 = str[i];
         str[i++] = str[j];
         str[j] = str2;
      }

      i = last;
   }
   printf("%s", str);
}


void num_2(char* Str) {
   struct Human
   {
      char Surname[100];
      char Name[100];
      char SecondName[100];
      char Sex[60];
      char Post[128];
      int Day;
      int Month;
      int Year;
      int Age;
   };

  
   int count = 0;

   scanf_s("%d", &count);

   struct Human* Arr = (struct Human*)malloc(count * sizeof(struct Human));
   for (int i = 0; i < count; i++)
   {
      printf("Enter surname:");
      scanf_s("%s", Arr[i].Surname, 256);

      printf("Enter name:");
      scanf_s("%s", Arr[i].Name, 256);

      printf("Enter second name:");
      scanf_s("%s", Arr[i].SecondName, 256);

      printf("Enter sex:");
      scanf_s("%s", Arr[i].Sex, 256);

      printf("Enter post:");
      scanf_s("%s", Arr[i].Post, 256);

      printf("Enter birthday:");
      scanf_s("%d", &Arr[i].Day);

      printf("Enter month of birth:");
      scanf_s("%d", &Arr[i].Month);

      printf("Enter Year of birth:");
      scanf_s("%d", &Arr[i].Year);

   }

   for (int i = 0; i < count; i++)
   {
      if (strcmp(Arr[i].Post, "engineer") == 1)
      {
         if (strcmp(Arr[i].Sex, "male") == 1)
         {
            if (Arr[i].Age >= 65)
            {
               printf("%s %s %s, %s, %s, %d.%d.%d", Arr[i].Surname, Arr[i].Name, Arr[i].SecondName, Arr[i].Sex, Arr[i].Post, Arr[i].Day, Arr[i].Month, Arr[i].Year);
            }
         }
         else (strcmp(Arr[i].Sex, "female" && Arr[i].Age >= 60) == 1);

            printf("%s %s %s, %s, %s, %d.%d.%d", Arr[i].Surname, Arr[i].Name, Arr[i].SecondName, Arr[i].Sex, Arr[i].Post, Arr[i].Day, Arr[i].Month, Arr[i].Year);
   
      }

   }


}

void num_3(char* name)
{
    FILE* f = NULL;
    FILE* g = NULL;

    fopen_s(&f, name, "r");
    if (!f)
    {
        printf("File not opened\n");
        return 0;
    }
    fopen_s(&g, "g.txt", "a");
    if (!g)
    {
        printf("File not opened\n");
        return 0;
    }
    int counter = 1;
    for (char tmp; fscanf_s(f, "%c", &tmp) != EOF;)
    {
        if (tmp == 'П' || tmp == 'п' || counter % 4 == 0)
        {
            counter++;
            while (tmp != ' ')
                fscanf_s(f, "%c", &tmp);
        }
        else
        {
            fprintf_s(g, "%c", tmp);
        }


    }
    fclose(f);
    fclose(g);
}