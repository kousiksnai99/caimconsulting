
1
2
3
4
5
6
7
8
9
10
11
12
13
14
15
16
17
18
19
20
21
22
23
24
25
26
27
28
29
30
31
32
33
34
35
36
37
38
39
40
41
42
43
44
45
46
47
48
49
50
51
52
53
54
55
56
57
58
59
60
61
62
63
64
65
66
67
68
69
70
71
72
73
74
75
76
77
78
79
80
81
82
83
84
85
86
87
88
89
90
91
92
93
94
95
96
97
98
99
100
101
102
103
104
105
106
107
108
109
110
111
112
113
114
115
116
117
118
119
120
121
122
123
124
125
126
127
128
129
130
131
132
133
134
135
136
137
138
139
140
141
142
143
144
145
146
147
148
149
150
151
152
153
154
155
156
157
158
159
160
161
162
163
164
165
166
167
168
169
170
171
172
173
174
175
176
177
178
179
180
181
182
183
184
185
186
187
188
189
190
191
192
193
194
195
196
197
198
199
200
201
202
203
204
205
206
207
208
209
210
211
212
213
214
215
216
217
218
219
220
221
222
223
224
225
226
227
228
229
230
231
#include <iostream>
#include<windows.h>
using namespace std;
main( )
{
system("color 3f");
int month,date;
int colour;
cout<<"______________Birthday Game____________\n\n\n";
                    //input
do
{
cout<<"Enter your birth month = ";
cin>>month;
if((month>=1)&&(month<=12))
break;
else
cout<<"Invalid Input..."<<endl;
}
 while(1);
do
{
cout<<"Enter your birth date = ";
cin>>date;
if(month==2) //used to tackle february month problem
{
if((date>=1)&&(date<=29))
break;
else
cout<<"Invalid Input..."<<endl;
}
else if((month==1)||(month==3)||(month==5)||(month==7)||(month==8)||(month==10)||(month==12))
{
if((date>=1)&&(date<=31))
break;
else
cout<<"Invalid Input..."<<endl;
}
else
{
if((date>=1)&&(date<=30))
break;
else
cout<<"Invalid Input..."<<endl;
}

} 
while(1);
cout<<"\n\nColour"<<"===="<<"Code"<<endl
<<"\nWhite\t=0"<<endl
<<"Black\t=1"<<endl
<<"Brown\t=2"<<endl
<<"Pink\t=3"<<endl
<<"Red\t=4"<<endl
<<"Blue\t=5"<<endl
<<"Green\t=6"<<endl
<<"Purple\t=7"<<endl
<<"Grey\t=8"<<endl
<<"Yellow\t=9"<<endl
<<"Orange\t=10"<<endl
<<"Other\t=11"<<endl;
do
{
cout<<"\n\nEnter the code of your shirt's colour that you are wearing now = ";
cin>>colour;
if((colour>=0)&&(colour<=11))
break;
else
cout<<"Invalid Input";
} 
while(1);
cout<<"\n\n\nYour statement according to your info is:\n\n";
cout<<endl;
//output
if(month==1)
cout<<"I fell in love with";
else 
if(month==2)
cout<<"i ate";
else
 if(month==3)
cout<<"I smacked";
else 
if(month==4)
cout<<"I sang to";
else if(month==5)
cout<<"I gave my number to";
else
 if(month==6)
cout<<"I murdered";
else if(month==7)
cout<<"I shot";
else
 if(month==8)
cout<<"I danced with";
else
 if(month==9)
cout<<"I choked on";
else 
if(month==10)
cout<<"I went out with";
else if(month==11)
cout<<"I kissed";
else
cout<<"I hugged";
if(date==1)
cout<<" a homeless guy";
else
if(date==2)
cout<<" your mom";
if(date==3)
cout<<" a banana";
if(date==4)
cout<<" a fork";
else
 if(date==5)
cout<<" a Mexican";
else 
if(date==6)
cout<<" a gangster";
else 
if(date==7)
cout<<" a ninja";
else 
if(date==8)
cout<<" an ipod";
else
 if(date==9)
cout<<" my best friend";
else
 if(date==10)
cout<<" a goat";
else
 if(date==11)
cout<<" my dog";
else
 if(date==12)
cout<<" my dad";
else 
if(date==13)
cout<<" the computer";
else 
if(date==14)
cout<<" a football player";
else
 if(date==15)
cout<<" my neighbor";
else 
if(date==16)
cout<<" myself";
else 
if(date==17)
cout<<" a soda";
else if(date==18)
cout<<" a lama";
else 
if(date==19)
cout<<" a pickle";
else
if(date==20)
cout<<" a stuffed animal";
else
 if(date==21)
cout<<" a weirdo";
else
 if(date==22)
cout<<" a sock";
else
 if(date==23)
cout<<" a doctor";
else
 if(date==24)
cout<<" my psychiatrist";
else
 if(date==25)
cout<<" a policeman";
else
 if(date==26)
cout<<" my brother";
else
 if(date==27)
cout<<" my sister";
else
 if(date==28)
cout<<" a baseball bat";
else
 if(date==29)
cout<<" a dvd player";
else
 if(date==30)
cout<<" my best friends brother";
else
cout<<" my cell phone";
if(colour==0)
cout<<" because I was high."<<endl;
else 
if(colour==1)
cout<<" because I was drunk."<<endl;
else 
if(colour==2)
cout<<" because your mom told me to."<<endl;
else
 if(colour==3)
cout<<" because I'm retarded."<<endl;
else 
if(colour==4)
cout<<" because the voices told me to."<<endl;
else
 if(colour==5)
cout<<" because I'm hot and i do what I want."<<endl;
else
 if(colour==6)
cout<<" because I hate myself."<<endl;
else
 if(colour==7)
cout<<" because I'm stupid."<<endl;
else
 if(colour==8)
cout<<" because that's how I roll."<<endl;
else
 if(colour==9)
cout<<" because someone offered me 1,000,000 dollars."<<endl;
else
 if(colour==10)cout<<" because I love my family."<<endl;
else
cout<<" because that's what I do."<<endl;
cout<<endl<<endl;
system("pause");
return 0;
} 
