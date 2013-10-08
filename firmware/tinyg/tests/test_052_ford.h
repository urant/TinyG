/* 
 * test_052_ford.h 
 *
 * Notes:
 *	  -	The character array should be derived from the filename (by convention)
 *	  - Comments are not allowed in the char array, but gcode comments are OK e.g. (g0 test)
 */

const char PROGMEM test_ford[] = "\
N1 G20 G40 G49 M6 T1\n\
N2 G17\n\
N3 M7\n\
N4741 G0Z0.2000\n\
N4742 G0X2.2757Y3.0231\n\
N4743 G1Z-0.0500F30.0\n\
N4744 G1X2.2375Y3.0012F65.0\n\
N4745 G1X2.2673Y3.0121\n\
N4746 G1X2.3020Y3.0269\n\
N4747 G1X2.3357Y3.0434\n\
N4748 G1X2.3720Y3.0633\n\
N4749 G1X2.4066Y3.0843\n\
N4750 G1X2.4405Y3.1068\n\
N4751 G1X2.4732Y3.1305\n\
N4752 G1X2.5015Y3.1527\n\
N4753 G1X2.4403Y3.1193\n\
N4754 G1X2.3470Y3.0656\n\
N4755 G1X2.2757Y3.0231\n\
N4756 G1X2.2630Y3.0447\n\
N4757 G1X2.2322Y3.0267\n\
N4758 G1X2.1994Y3.0091\n\
N4759 G1X2.1755Y2.9988\n\
N4760 G1X2.1392Y2.9868\n\
N4761 G1X2.1341Y2.9856\n\
N4762 G2X2.0757Y2.9795I-0.0523J0.2188\n\
N9999 G1X0Y0\n\
";

/*

/N4 G0Z0.8000\n\
/N5 G0X0.0000Y0.0000S12000M3\n\
/N6 G0X3.1194Y1.9543Z0.2000\n\
/N7 G1Z-0.0500F30.0\n\
/N8 G1X3.0766Y1.9315F65.0\n\
/N9 G1X3.1839Y1.9100\n\
/N100 G92X3.3264Y3.1665\n\
/N101 G92X2.2757Y3.0231\n\
/N4730 G1X3.0041Y2.7748\n\
/N4731 G1X3.0420Y2.8122\n\
/N4732 G1X3.0812Y2.8525\n\
/N4733 G1X3.1044Y2.8789\n\
/N4734 G1X3.1323Y2.9139\n\
/N4735 G1X3.2369Y3.0539\n\
/N4736 G1X3.2796Y3.1091\n\
/N4737 G1X3.3264Y3.1665\n\
/N4738 G1X3.3787Y3.2266\n\
/N4739 G1X3.4067Y3.2568\n\
/N4740 G1X3.4360Y3.2872\n\


/N4763 G1X2.0720Y2.9796\n\
/N4764 G2X2.0040Y2.9921I0.0060J0.2249\n\
/N4765 G1X2.0153Y2.9779\n\
/N4766 G1X2.0222Y2.9706\n\
/N4767 G1X2.0326Y2.9618\n\
/N4768 G1X2.0365Y2.9596\n\
/N4769 G1X2.0599Y2.9547\n\
/N4770 G1X2.0854Y2.9519\n\
/N4771 G1X2.1128Y2.9514\n\
/N4772 G1X2.1423Y2.9535\n\
/N4773 G1X2.1737Y2.9583\n\
/N4774 G1X2.2068Y2.9658\n\


*/