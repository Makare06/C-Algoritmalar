using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;

namespace ConsoleApplication1
{
    class Program
    {
        static void Main(string[] args)
        {
            Console.Write("Hangi Yıla Kadar Evde Kalacaksınız : ");
            int yil = Convert.ToInt32(Console.ReadLine());

            double kira = 1000;                                     
            double toplam_kira = 0;
            for (int i = 2019; i <= yil;i++ )
            {
                if (i % 10 != 0)
                {                  
                        kira = kira + (kira * 5 / 100);
                        toplam_kira += kira * 12;
                }
                else
                {
                    toplam_kira += 12000;
                }
            }

               
            Console.Write(yil + " Yılına kadar kalacagınız taktirde ödeyeceğiniz kira bedeli : " + (toplam_kira + 12000) + " TL");
            Console.ReadKey();
        }
    }
}
