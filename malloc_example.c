#include <stdio.h>     //���������ӡ�� 
#include <string.h>    //�ַ����� 
#include <stdlib.h>    //��׼�� 
 
int main()
{
   char *str;    //����һ��ָ��
 
   /* ������ڴ���� */
   str = (char *) malloc(15);   //Ϊ��ָ������ڴ� 
   strcpy(str, "runoob");       //ͨ���ַ����������������ݿ�������Ӧ��ָ���� 
   printf("String = %s,  Address = %u\n", str, str);
   printf("String = %s,  Address = %u\n", str, str);
   printf("String = %s,  Address = %u\n", str, str);
   /* ���·����ڴ� */
   str = (char *) realloc(str, 25);
   strcat(str, ".com");
   printf("String = %s,  Address = %u\n", str, str);
   /*����ר��*/
   //C1
   printf("String = %s,  Address = %u\n", str, str);
   //C2
   printf("String = %s,  Address = %u\n", str, str);
   //C3
   printf("String = %s,  Address = %u\n", str, str);

   //bug  C3��BUG
   printf("String1111 = %s,  Address1111 = %u\n", str, str);

   //dev ���̳ǡ�
   printf("String = %s,  Address = %u\n", str, str);
   printf("String = %s,  Address = %u\n", str, str);

  
   //����ר��
   printf("A = %s,  B = %u\n", str, str);

   //����ר��2
   printf("A = %s,  B = %u\n", str, str);

   //dev��֧
   printf("A = %s,  B = %u\n", str, str);


 
   free(str);                  //�ͷŶ����ڴ� 
 
   return(0);
}


