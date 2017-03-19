using System;

namespace Sum
{
    class Program
    {
        static void Main(string[] args)
        {
            string[] num = Console.ReadLine().Split();
            ulong a = ulong.Parse(num[0]);
            ulong b = ulong.Parse(num[1]);
            Console.WriteLine((a + b) + (a - b) + (b + a) + (b - a));
        }
    }
}