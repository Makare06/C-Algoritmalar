using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace fibonaccihafta6_c_
{
    class Program
    {
        static void Main(string[] args)
        {

                int ilksayi = 1;
                int ikincisayi = 1;
                int araikincisayi = 0;
                int aradeger = 0; 
                int sayac = 1;//1 + 1 kısmını atladığımızdan sayac 1 den başlıyor
                Console.Write("(Kendisine kadar olan fibonacci sayılarını sıralayacak) Sayı giriniz: ");
                int sayi = int.Parse(Console.ReadLine());

                while (ikincisayi + ilksayi <= sayi)
                {
                aradeger = ilksayi;
                araikincisayi = ikincisayi;
                    ikincisayi = ikincisayi + ilksayi;
                    ilksayi = araikincisayi;    
                            
                }
            if (ikincisayi == sayi)
                Console.WriteLine(ikincisayi-aradeger);
            else
                Console.WriteLine(ikincisayi);

            Console.WriteLine(ikincisayi+ilksayi);

            Console.ReadKey();

        }
    }
}
