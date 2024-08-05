#include <iostream>
#include <math.h>
using namespace std;

double f(double x) //заданная функция
{
    return pow(x, 4) - 1.5 * atan(x);
}

void perebor(double a, double b)
{
    int i, N;
    double* x, * y, X = 0, Y = 0, Eгар = 0;
    cout << " N = "; cin >> N;
    x = new double[N];
    y = new double[N];

    for (i = 1; i <= N; i++)
    {
        x[i] = a + i * ((b - a) / (N + 1));
    }
    for (i = 1; i <= N; i++)
    {
        y[i] = f(x[i]);
    }
    double yl = y[1];
    int l = 1;
    for (i = 1; i <= N; i++)
        if (y[i] < yl)
        {
            yl = y[i];
            l = i;
        }
    X = x[l];
    Y = y[l];
    Eгар = (b - a) / (N + 1);
    cout << " х = " << X << "\n y = " << Y << "\n Егарант = " << Eгар << "\n N = " << N << "\n";
    system("pause");
}

void passiv_optimal(double a, double b)
{
    int N, i, k;
    double d, * x, * y, X = 0, Y = 0, Eгар = 0;
    cout << " N = "; cin >> N; cout << " d = "; cin >> d;
    x = new double[N];
    y = new double[N];
    if (N % 2 == 0)
    {
        k = N / 2;
        for (i = 1; i <= k; i++)
        {
            x[2 * i] = a + i * (b - a) / (k + 1);
            x[2 * i - 1] = x[2 * i] - d;
        }
        for (i = 1; i <= N; i++)
            y[i] = f(x[i]);
        double yl = y[1];
        int l = 1;
        for (i = 1; i <= N; i++)
            if (y[i] < yl)
            {
                yl = y[i];
                l = i;
            }
        X = x[l];
        Y = y[l];
        Eгар = (x[l + 1] - x[l - 1]) / 2;
    }
    else
    {
        for (i = 1; i <= N; i++)
            x[i] = a + i * (b - a) / (N + 1);
        for (i = 1; i <= N; i++)
            y[i] = f(x[i]);
        double yl = y[1];
        int l = 1;
        for (i = 1; i <= N; i++)
            if (y[i] < yl)
            {
                yl = y[i];
                l = i;
            }
        X = x[l];
        Y = y[l];
        Eгар = (b - a) / (N + 1);
    }
    cout << " х = " << X << "\n y = " << Y << "\n Егарант = " << Eгар << "\n";
    system("pause");
    return;
}

void porazryad_poisk(double a, double b)
{
    int k;
    double E, h, x0, y0, x1, y1, Eгар, X, Y;
    cout << " Введите точность Е : "; cin >> E;
    h = (b - a) / 4; //шаг перехода в следующую точку
    x0 = a; //текущая точка
    y0 = f(x0);
    k = 1; //кол-во (вычисл-ых) экспериментов, понадобившихся для достижения заданной точности
cy:
    x1 = x0 + h; //следующая точка
    y1 = f(x1);
    k++;
    if (y0 > y1) //функция убывает
    {
        x0 = x1;
        y0 = y1;
    }
    else goto sl; //функция начала расти
    if ((x0 > a) && (x0 < b)) //находимся на отрезке
        goto cy;
sl:
    if (abs(h) <= E) //точность достигнута
    {
        X = x0;
        Y = y0;
        Eгар = h;
    }
    else //точность не достигнута, меняем направление
    {
        x0 = x1;
        y0 = y1;
        h = -h / 4;
        goto cy;
    }
    cout << " х = " << X << "\n y = " << Y << "\n Егарант = " << Eгар << "\n N = " <<
        k << "\n";
    system("pause");
    return;
}

void delenie_popolam(double a, double b)
{
    double E, Eгар;
    cout << "Введите точность Е: "; cin >> E;
    double x[5], y[4], yl, xl;
    int i, N, l;
    x[2] = (a + b) / 2;  //середина отрезка неопределенности
    y[2] = f(x[2]);
    N = 1; //счетчик экспериментов
    while (b - a > 2 * E)
    {
        x[0] = a;
        x[4] = b;
        x[1] = (a + x[2]) / 2;
        y[1] = f(x[1]);
        x[3] = (x[2] + b) / 2;
        y[3] = f(x[3]);
        N += 2;
        /*поиск минимума*/
        yl = y[1]; xl = x[1]; l = 1;
        for (i = 2; i < 4; i++)
            if (yl > y[i]) { yl = y[i]; xl = x[i]; l = i; }
        a = x[l - 1];
        b = x[l + 1];

        x[2] = xl;
        y[2] = yl;
    }
    Eгар = (b - a) / 2; //достигнутая гарантированная точность решения
    cout << " x = " << x[2] << "\n y = " << y[2] << "\n N = " << N << "\n Егарант = " << Eгар << "\n";
    system("pause");
}

void dihotomiya(double a, double b)
{
    double E, Eгар;
    cout << "Введите точность Е: "; cin >> E;
    double d = E / 10, x, y1, y2;
    int N; N = 0; //счетчик экспериментов
    while (b - a > 2 * E)
    {
        x = (a + b) / 2;
        y1 = f(x - d);
        y2 = f(x + d);
        N += 2;
        (y1 < y2 ? b = x + d : a = x - d);
    }
    x = (a + b) / 2;
    y1 = f(x);

    Eгар = (b - a) / 2; //достигнутая гарантированная точность решения
    cout << " x = " << x << "\n y = " << y1 << "\n N = " << N << "\n Егарант = " << Eгар << "\n";
    system("pause");
}

void zolotoe_sechenie(double a, double b) //метод золотого сечения
{
    int k = 0; //кол-во (вычисл-ых) экспериментов, понадобившихся для достижения заданной точности
    double E;
    cout << "Введите точность Е: "; cin >> E;
    double t = (1 + sqrt(5)) / 2; //пропорция t золотое сечение
    double x1, x2, y1, y2, Eгар, x, y, Np;
    Np = ceil((log((b - a) / (2 * E)) / log(t)) + 1); //расчетное число экспериментов для достижения заданной точности
    x1 = b - (b - a) / t; //первый выбор точки x, делящей отрезок [a;b] в пропорции золотого сечения
    y1 = f(x1);
    x2 = a + (b - a) / t;//второй выбор точки x, делящей отрезок [a;b] в пропорции золотого сечения
    y2 = f(x2);
    k = 2;
    do
    {
        if (y1 < y2) {
            b = x2; x2 = x1; y2 = y1; x1 = a + b - x2;//определение симметричной точки
            y1 = f(x1);
        }
        else {
            a = x1; x1 = x2; y1 = y2; x2 = a + b - x1;//определение симметричной точки
            y2 = f(x2);
        }
        k++;
    } while ((b - a) > 2 * E * t);
    //отрезок локализации:
    { if (y1 < y2) b = x2;
    else a = x1;
    }
    x = (a + b) / 2; //приближенное решение (середина последнего отрезка локализации)
    y = f(x);
    Eгар = (b - a) / 2; //достигнутая гарантированная точность решения
    cout << " x = " << x << "\n y = " << y << "\n N = " << k << "\n N расчет = " << Np <<
        "\n Е гарант = " << Eгар << "\n";
    system("pause");
}

void main()
{
    double a = 0, b = 1;
    setlocale(LC_ALL, "Russian");
    int j;
    while (1)
    {
        system("cls");
        cout << "1. Метод перебора " << endl;
        cout << "2. Пассивный оптимальный метод " << endl;
        cout << "3. Поразрядный поиск " << endl;
        cout << "4. Деление отрезка пополам " << endl;
        cout << "5. Дихотомия " << endl;
        cout << "6. Золотое сечение " << endl;
        cout << "7. Выход из программы." << endl;
        cout << " Ваш выбор (1-7): ";
        cin >> j;
        switch (j)
        {
        case 1:perebor(a, b); break;
        case 2:passiv_optimal(a, b); break;
        case 3:porazryad_poisk(a, b); break;
        case 4:delenie_popolam(a, b); break;
        case 5:dihotomiya(a, b); break;
        case 6:zolotoe_sechenie(a, b); break;
        case 7: cout << " Конец работы.\n";  system("pause"); return;
        default: cout << " Ошибка: нет такого пункта меню.\n"; break;
        }
    }
}
