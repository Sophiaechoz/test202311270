#include <stdio.h>     //输入输出打印库 
#include <string.h>    //字符串库 
#include <stdlib.h>    //标准库 
 
int main()
{
   char *str;    //定义一个指针
 
   /* 最初的内存分配 */
   str = (char *) malloc(15);   //为该指针分配内存 
   strcpy(str, "runoob");       //通过字符串拷贝函数将数据拷贝到相应的指针中 
   printf("String = %s,  Address = %u\n", str, str);
   printf("String = %s,  Address = %u\n", str, str);
   printf("String = %s,  Address = %u\n", str, str);
   /* 重新分配内存 */
   str = (char *) realloc(str, 25);
   strcat(str, ".com");
   printf("String = %s,  Address = %u\n", str, str);
   /*测试专用*/
   //C1
   printf("String = %s,  Address = %u\n", str, str);
   //C2
   printf("String = %s,  Address = %u\n", str, str);
   //C3
   printf("String = %s,  Address = %u\n", str, str);

   //bug  C3的BUG
   printf("String1111 = %s,  Address1111 = %u\n", str, str);

   //dev “商城”
   printf("String = %s,  Address = %u\n", str, str);
   printf("String = %s,  Address = %u\n", str, str);

  
   //测试专用
   printf("A = %s,  B = %u\n", str, str);




 
   free(str);                  //释放堆区内存 
 
   return(0);
}


