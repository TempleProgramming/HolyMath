
Cd(__DIR__);;

//-----------------------------------------------------------------------------
// F32Cos
/* This test depends on the HolyGL library for graphing. */

F32 q0 = F32Cos(F642F32(0.785398));
F32 q1 = F32Cos(F642F32(2.35619));
F32 q2 = F32Cos(F642F32(3.92699));
F32 q3 = F32Cos(F642F32(5.49779));
"Cos(45deg)  F32Cos: %n | Cos: %n\n", F322F64(q0), Cos(0.785398);
"Cos(135deg) F32Cos: %n | Cos: %n\n", F322F64(q1), Cos(2.35619);
"Cos(225deg) F32Cos: %n | Cos: %n\n", F322F64(q2), Cos(3.92699);
"Cos(315deg) F32Cos: %n | Cos: %n\n", F322F64(q3), Cos(5.49779);

CGLTex2D graph;
GLTex2DInit(&graph, GL_TEX2D_RAW, 600, 512);
GLTex2DColorFill(&graph, 0xFFFFFF);
GLBindColorTarget(&graph);

F64 temp = (ã / 2) * 100.0;
GLDrawLine(temp, 0, temp, 512, 0x00FF00);

F64 temp = (2 * ã / 2) * 100.0;
GLDrawLine(temp, 0, temp, 512, 0x00FF00);

F64 temp = (3 * ã / 2) * 100.0;
GLDrawLine(temp, 0, temp, 512, 0x00FF00);

I64 i;
F64 angle;
F64 result;
for (i = 0; i < 600; i++)
{
	angle = i * 0.01;
	
	result = Cos(angle);
	result *= -100.0;
	result += 256;
	GLDrawPixel(i, result, 0xFF0000);

	result = F322F64(F32Cos(F642F32(angle)));
	result *= -100.0;
	result += 256;
	GLDrawPixel(i, result, 0x0000FF);
}

while (CharScan() == 0)
{
	GLTex2DDebugDisp(&graph, 16, 16);
	Sleep(1);
}
//-----------------------------------------------------------------------------