<h1>Тема: "Методы одномерной оптимизации (методы нулевого порядка)"</h1>

> <strong><h2>Задание</h2></strong>
> <p>Вычислить минимальное значение функции f(x)=x^4-1.5*arctan(x) на интервале [0;1] с заданной точностью ɛ.</p>

> <strong><h2>Выполнение задания:</h2></strong>
<strong>Целевая функция:</strong> f(x)=x^4-1.5*arctan(x) <br>
<strong>Область неопределенности:</strong> [0;1] <br> <br>

![image](https://github.com/user-attachments/assets/6454c5e0-211d-4e22-924e-f9c3defa8136)
<p>Рисунок 1 − График функции f(x)=x^4-1.5*arctan(x) на интервале [0;1]</p> <br>

<h3>В ходе решения были использованы методы:</h3>
<ol>
  <li>Метод перебора</li>
  <li>Пассивно-оптимальный метод</li>
  <li>Метод деления отрезка пополам</li>
  <li>Метод золотого сечения</li>
  <li>Метод дихотомии</li>
  <li>Метод поразрядного поиска</li>
</ol>

<strong><h3>Расчетные таблицы</h3></strong>

<table width="0">
<tbody>
<tr>
<td colspan="6" width="648"><strong><br /> </strong>
<p>Метод золотого сечения</p>
</td>
</tr>
<tr>
<td width="107">
<p>ɛ</p>
</td>
<td width="107">
<p>x</p>
</td>
<td width="107">
<p>y</p>
</td>
<td width="115">&nbsp;ɛгарант</td>
<td width="105">
<p>N</p>
</td>
<td width="107">Nрасчет&nbsp;</td>
</tr>
<tr>
<td width="107">
<p>0,1</p>
</td>
<td width="107">
<p>0,600813</p>
</td>
<td width="107">
<p>-0,681222</p>
</td>
<td width="115">
<p>0,072949</p>
</td>
<td width="105">
<p>5</p>
</td>
<td width="107">
<p>5</p>
</td>
</tr>
<tr>
<td width="107">
<p>0,01</p>
</td>
<td width="107">
<p>0,645898</p>
</td>
<td width="107">
<p>-0,686187</p>
</td>
<td width="115">
<p>0,00657781</p>
</td>
<td width="105">
<p>10</p>
</td>
<td width="107">
<p>10</p>
</td>
</tr>
<tr>
<td width="107">
<p>0,001</p>
</td>
<td width="107">
<p>0,642199</p>
</td>
<td width="107">
<p>-0,686218</p>
</td>
<td width="115">
<p>0,000959689</p>
</td>
<td width="105">
<p>14</p>
</td>
<td width="107">
<p>14</p>
</td>
</tr>
<tr>
<td width="107">
<p>0,0001</p>
</td>
<td width="107">
<p>0,642619</p>
</td>
<td width="107">
<p>-0,686218</p>
</td>
<td width="115">
<p>8,65351e-05</p>
</td>
<td width="105">
<p>19</p>
</td>
<td width="107">
<p>19</p>
</td>
</tr>
<tr>
<td width="107">
<p>0,00001</p>
</td>
<td width="107">
<p>0,642632</p>
</td>
<td width="107">
<p>-0,686218</p>
</td>
<td width="115">
<p>7,80287e-06</p>
</td>
<td width="105">
<p>24</p>
</td>
<td width="107">
<p>24</p>
</td>
</tr>
</tbody>
</table>

<table width="0">
<tbody>
<tr>
<td colspan="5" width="649">
<p>Метод дихотомии</p>
</td>
</tr>
<tr>
<td width="130">
<p>ɛ</p>
</td>
<td width="130">
<p>x</p>
</td>
<td width="130">
<p>y</p>
</td>
<td width="130">&nbsp;ɛгарант</td>
<td width="130">
<p>N</p>
</td>
</tr>
<tr>
<td width="130">
<p>0,1</p>
</td>
<td width="130">
<p>0,68375</p>
</td>
<td width="130">
<p>-0,681035</p>
</td>
<td width="130">
<p>0,07125</p>
</td>
<td width="130">
<p>6</p>
</td>
</tr>
<tr>
<td width="130">
<p>0,01</p>
</td>
<td width="130">
<p>0,648141</p>
</td>
<td width="130">
<p>-0,686128</p>
</td>
<td width="130">
<p>0,00879688</p>
</td>
<td width="130">
<p>12</p>
</td>
</tr>
<tr>
<td width="130">
<p>0,001</p>
</td>
<td width="130">
<p>0,643038</p>
</td>
<td width="130">
<p>-0,686218</p>
</td>
<td width="130">
<p>0,000588184</p>
</td>
<td width="130">
<p>20</p>
</td>
</tr>
<tr>
<td width="130">
<p>0,0001</p>
</td>
<td width="130">
<p>0,642636</p>
</td>
<td width="130">
<p>-0,686218</p>
</td>
<td width="130">
<p>7,10339e-05</p>
</td>
<td width="130">
<p>26</p>
</td>
</tr>
<tr>
<td width="130">
<p>0,00001</p>
</td>
<td width="130">
<p>0,642631</p>
</td>
<td width="130">
<p>-0,686218</p>
</td>
<td width="130">
<p>8,62938e-06</p>
</td>
<td width="130">
<p>32</p>
</td>
</tr>
</tbody>
</table>

<table width="0">
<tbody>
<tr>
<td colspan="5" width="649">
<p>Метод поразрядного поиска</p>
</td>
</tr>
<tr>
<td width="147">
<p>ɛ</p>
</td>
<td width="125">
<p>x</p>
</td>
<td width="125">
<p>y</p>
</td>
<td width="127">&nbsp;ɛгарант</td>
<td width="125">
<p>N</p>
</td>
</tr>
<tr>
<td width="147">
<p>0,1</p>
</td>
<td width="125">
<p>0,625</p>
</td>
<td width="125">
<p>-0,685311</p>
</td>
<td width="127">
<p>-0,0625</p>
</td>
<td width="125">
<p>12</p>
</td>
</tr>
<tr>
<td width="147">
<p>0,01</p>
</td>
<td width="125">
<p>0,644531</p>
</td>
<td width="125">
<p>-0,686207</p>
</td>
<td width="127">
<p>-0,00390625</p>
</td>
<td width="125">
<p>22</p>
</td>
</tr>
<tr>
<td width="147">
<p>0,001</p>
</td>
<td width="125">
<p>0,642578</p>
</td>
<td width="125">
<p>-0,686218</p>
</td>
<td width="127">
<p>0,000976563</p>
</td>
<td width="125">
<p>25</p>
</td>
</tr>
<tr>
<td width="147">
<p>0,0001</p>
</td>
<td width="125">
<p>0,642639</p>
</td>
<td width="125">
<p>-0,686218</p>
</td>
<td width="127">
<p>6,10352e-05</p>
</td>
<td width="125">
<p>36</p>
</td>
</tr>
<tr>
<td width="147">
<p>0,00001</p>
</td>
<td width="125">
<p>0,642635</p>
</td>
<td width="125">
<p>-0,686218</p>
</td>
<td width="127">
<p>3,8147e-06</p>
</td>
<td width="125">
<p>45</p>
</td>
</tr>
</tbody>
</table>

<table width="0">
<tbody>
<tr>
<td colspan="6" width="648">
<p style="text-align: center;">Пассивно-оптимальный метод</p>
</td>
</tr>
<tr>
<td style="text-align: center;" width="108">
<p>ɛ</p>
</td>
<td style="text-align: center;" width="108">
<p>x</p>
</td>
<td style="text-align: center;" width="108">
<p>y</p>
</td>
<td style="text-align: center;" width="108">&nbsp;ɛгарант</td>
<td style="text-align: center;" width="108">
<p>N</p>
</td>
<td style="text-align: center;" width="108">&nbsp;d</td>
</tr>
<tr>
<td style="text-align: center;" width="108">
<p>0,1</p>
</td>
<td style="text-align: center;" width="108">
<p>0.6</p>
</td>
<td style="text-align: center;" width="108">
<p>-0,681029</p>
</td>
<td style="text-align: center;" width="108">
<p>0,1</p>
</td>
<td style="text-align: center;" width="108">
<p>9</p>
</td>
<td style="text-align: center;" width="108">
<p>0,01</p>
</td>
</tr>
<tr>
<td style="text-align: center;" width="108">
<p>0,01</p>
</td>
<td style="text-align: center;" width="108">
<p>0,64</p>
</td>
<td style="text-align: center;" width="108">
<p>-0,686198</p>
</td>
<td style="text-align: center;" width="108">
<p>0,01</p>
</td>
<td style="text-align: center;" width="108">
<p>99</p>
</td>
<td style="text-align: center;" width="108">
<p>0,001</p>
</td>
</tr>
<tr>
<td style="text-align: center;" width="108">
<p>0,001</p>
</td>
<td style="text-align: center;" width="108">
<p>0,643</p>
</td>
<td style="text-align: center;" width="108">
<p>-0,686218</p>
</td>
<td style="text-align: center;" width="108">
<p>0,001</p>
</td>
<td style="text-align: center;" width="108">
<p>999</p>
</td>
<td style="text-align: center;" width="108">
<p>0,0001</p>
</td>
</tr>
<tr>
<td style="text-align: center;" width="108">
<p>0,0001</p>
</td>
<td style="text-align: center;" width="108">
<p>0,6426</p>
</td>
<td style="text-align: center;" width="108">
<p>-0,686218</p>
</td>
<td style="text-align: center;" width="108">
<p>0,0001</p>
</td>
<td style="text-align: center;" width="108">
<p>9999</p>
</td>
<td style="text-align: center;" width="108">
<p>0,00001</p>
</td>
</tr>
<tr>
<td style="text-align: center;" width="108">
<p>0,00001</p>
</td>
<td style="text-align: center;" width="108">
<p>0,64264</p>
</td>
<td style="text-align: center;" width="108">
<p>-0,686218</p>
</td>
<td style="text-align: center;" width="108">
<p>1e-05</p>
</td>
<td style="text-align: center;" width="108">
<p>99999</p>
</td>
<td style="text-align: center;" width="108">
<p>0,000001</p>
</td>
</tr>
</tbody>
</table>

<table width="0">
<tbody>
<tr>
<td colspan="5" width="643">
<p>Метод перебора</p>
</td>
</tr>
<tr>
<td width="129">
<p>ɛ</p>
</td>
<td width="129">
<p>x</p>
</td>
<td width="128">
<p>y</p>
</td>
<td width="129">&nbsp;ɛгарант</td>
<td width="129">
<p>N</p>
</td>
</tr>
<tr>
<td width="129">
<p>0,1</p>
</td>
<td width="129">
<p>0,6</p>
</td>
<td width="128">
<p>-0,681029</p>
</td>
<td width="129">
<p>0,1</p>
</td>
<td width="129">
<p>9</p>
</td>
</tr>
<tr>
<td width="129">
<p>0,01</p>
</td>
<td width="129">
<p>0,64</p>
</td>
<td width="128">
<p>-0,686198</p>
</td>
<td width="129">
<p>0,01</p>
</td>
<td width="129">
<p>99</p>
</td>
</tr>
<tr>
<td width="129">
<p>0,001</p>
</td>
<td width="129">
<p>0,643</p>
</td>
<td width="128">
<p>-0,686218</p>
</td>
<td width="129">
<p>0,001</p>
</td>
<td width="129">
<p>999</p>
</td>
</tr>
<tr>
<td width="129">
<p>0,0001</p>
</td>
<td width="129">
<p>0,6426</p>
</td>
<td width="128">
<p>-0,686218</p>
</td>
<td width="129">
<p>0,0001</p>
</td>
<td width="129">
<p>9999</p>
</td>
</tr>
<tr>
<td width="129">
<p>0,00001</p>
</td>
<td width="129">
<p>0,64264</p>
</td>
<td width="128">
<p>-0,686218</p>
</td>
<td width="129">
<p>1e-05</p>
</td>
<td width="129">
<p>99999</p>
</td>
</tr>
</tbody>
</table>

<table width="0">
<tbody>
<tr>
<td colspan="5" width="647">
<p>Метод деления отрезка пополам</p>
</td>
</tr>
<tr>
<td width="129">
<p>ɛ</p>
</td>
<td width="129">
<p>x</p>
</td>
<td width="129">
<p>y</p>
</td>
<td width="129">&nbsp;ɛгарант</td>
<td width="129">
<p>N</p>
</td>
</tr>
<tr>
<td width="129">
<p>0,1</p>
</td>
<td width="129">
<p>0,625</p>
</td>
<td width="129">
<p>-0,685311</p>
</td>
<td width="129">
<p>0,0625</p>
</td>
<td width="129">
<p>7</p>
</td>
</tr>
<tr>
<td width="129">
<p>0,01</p>
</td>
<td width="129">
<p>0,640625</p>
</td>
<td width="129">
<p>-0,686206</p>
</td>
<td width="129">
<p>0,0078125</p>
</td>
<td width="129">
<p>13</p>
</td>
</tr>
<tr>
<td width="129">
<p>0,001</p>
</td>
<td width="129">
<p>0,642578</p>
</td>
<td width="129">
<p>-0,686218</p>
</td>
<td width="129">
<p>0,000976563</p>
</td>
<td width="129">
<p>19</p>
</td>
</tr>
<tr>
<td width="129">
<p>0,0001</p>
</td>
<td width="129">
<p>0,642639</p>
</td>
<td width="129">
<p>-0,686218</p>
</td>
<td width="129">
<p>6,10352e-05</p>
</td>
<td width="129">
<p>27</p>
</td>
</tr>
<tr>
<td width="129">
<p>0,00001</p>
</td>
<td width="129">
<p>0,642639</p>
</td>
<td width="129">
<p>-0,686218</p>
</td>
<td width="129">
<p>7,62939e-06</p>
</td>
<td width="129">
<p>33</p>
</td>
</tr>
</tbody>
</table>

![Расчёт 1](https://github.com/user-attachments/assets/2739ae31-d9fd-4986-a4fd-a1a02b85ae1d)

![Расчёт 2](https://github.com/user-attachments/assets/753256bc-b7fe-4cb0-9f03-c3bcbc5eefdb)

<h2>Графики эффективности пассивных и последовательных методов</h2>

![Рисунок 2 График эффективности пассивных методов](https://github.com/user-attachments/assets/27a7b65f-fabd-49f4-b602-1926a758e9a2)
<p>Рисунок 2 − График эффективности пассивных методов</p>

![Рисунок 3 График эффективности последовательных методов](https://github.com/user-attachments/assets/85abc14b-16e3-48e3-83f5-c13183c54d3a)
<p>Рисунок 3 − График эффективности последовательных методов</p>

<p><strong>Вывод:</strong> для заданной целевой функции на заданном отрезке
локализации при заданных числах экспериментов для рассмотренных
методов наилучший результат дал метод золотого сечения. </p><br>
