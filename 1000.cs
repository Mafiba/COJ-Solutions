using System;
using System.Collections;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace ConsoleApp1
{
    class Program
    {
        static void Main(string[] args)
        {
            string[] sum = Console.ReadLine().Split();
            int a = int.Parse(sum[0]);
            int b = int.Parse(sum[1]);
            Console.WriteLine(a + b);
        }
    }
}
