using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace _1495
{
    class Program
    {
        static void Main(string[] args)
        {
            int i = 0;
            int casos = int.Parse(Console.ReadLine());
                int[] a= new int[casos];
                for (i = 0; i < casos; i++)
                {
                    int valor = 0;
                    int.TryParse(Console.ReadLine(), out valor);
                    a[i] = valor;
                }
                Array.Sort(a);
                foreach(int n in a)
                {
                    Console.WriteLine(n);
                }
            }

        }
    }