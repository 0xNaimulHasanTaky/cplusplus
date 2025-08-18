// A character literal{Literals.cpp} represents a single character or code point stored in a character type.
// Character literals are enclosed in single quotes ('') or prefixed with certain specifiers for wide/Unicode characters.
// The literal can be a simple character, an escape sequence, or a universal character name.

// Types of Character Literals (based on prefix):

// Narrow character
// Prefix: none
// Type: char
// Size: 1 byte, implementation-defined signedness (commonly -128..127 or 0..255)
// Value: Represents a code unit of the execution character set (commonly ASCII)
// Examples: 'A', 'z', '9', '!', '\n'

// Wide character
// Prefix: L
// Type: wchar_t
// Size: implementation-defined (commonly 2 bytes on Windows, 4 bytes on Linux/Unix)
// Value:wide character from the execution wide character set (commonly UTF-16 on Windows, UTF-32 on Linux/Unix)
// Examples: L'A', L'Ω', L'\n'

// UTF-8 character
// Prefix: u8
// Type: char8_t
// Size: 1 byte
// Value: UTF-8 code unit
// Examples: u8'A', u8'ß'

// UTF-16 character
// Prefix: u
// Type: char16_t
// Size: 2 bytes (at least)
// Value: UTF-16 code unit
// Examples: u'A', u'中'

// UTF-32 character
// Prefix: U
// Type: char32_t
// Size: 4 bytes (at least)
// Value: UTF-32 code unit
// Examples: U'A', U'中', U'🙂'


// Escape Sequences:
// Escape sequences begin with a backslash (\) and represent characters not easily typed or visible.
// Simple character escapes:
// \'  = single quote
// \"  = double quote
// \\  = backslash
// \?  = question mark
// \n  = newline
// \r  = carriage return
// \t  = horizontal tab
// \v  = vertical tab
// \b  = backspace
// \f  = form feed
// \a  = alert/bell
// \0  = null character (value 0)

// Octal escapes:
// \ followed by up to 3 octal digits (0–7)
// Example: 
// \101 = A

// Hexadecimal escapes:
// \x followed by one or more hex digits (0–F)
// Example:
// \x41 = A

// Universal character names (Unicode escapes):
// \u followed by 4 hex digits (Unicode code point U+0000 to U+FFFF)
// \U followed by 8 hex digits (Unicode code point U+00000000 to U+10FFFF)
// Examples:
// \u03A9     = Greek capital letter Ω
// \U0001F600 = 😀 (grinning face)


// Unicode Examples (Code Point = Encodings):

// 'Ω' (Greek capital omega)
// Code point: U+03A9
// Decimal: 937
// UTF-8: 0xCE 0xA9
// UTF-16: 0x03A9
// UTF-32: 0x000003A9

// '中' (CJK character)
// Code point: U+4E2D
// Decimal: 20013
// UTF-8: 0xE4 0xB8 0xAD
// UTF-16: 0x4E2D
// UTF-32: 0x00004E2D

// '🙂' (Smiley emoji)
// Code point: U+1F642
// Decimal: 128578
// UTF-8: 0xF0 0x9F 0x99 0x82
// UTF-16: 0xD83D 0xDE42 (surrogate pair)
// UTF-32: 0x0001F642


// Character Code Conversions
// ASCII (0–127) + Extended ASCII Table (128–255) ISO 8859-1 (Latin-1)
/*
Dec  Hex   Oct   Uni4    Uni8        Char   Description
---  ----  ----  ------  ----------  -----  ----------------------------
  0  0x00  0000  U+0000  U+00000000  NUL    Null
  1  0x01  0001  U+0001  U+00000001  SOH    Start of Heading
  2  0x02  0002  U+0002  U+00000002  STX    Start of Text
  3  0x03  0003  U+0003  U+00000003  ETX    End of Text
  4  0x04  0004  U+0004  U+00000004  EOT    End of Transmission
  5  0x05  0005  U+0005  U+00000005  ENQ    Enquiry
  6  0x06  0006  U+0006  U+00000006  ACK    Acknowledge
  7  0x07  0007  U+0007  U+00000007  BEL    Bell (alert)
  8  0x08  0010  U+0008  U+00000008  BS     Backspace
  9  0x09  0011  U+0009  U+00000009  TAB    Horizontal Tab
 10  0x0A  0012  U+000A  U+0000000A  LF     Line Feed (newline)
 11  0x0B  0013  U+000B  U+0000000B  VT     Vertical Tab
 12  0x0C  0014  U+000C  U+0000000C  FF     Form Feed
 13  0x0D  0015  U+000D  U+0000000D  CR     Carriage Return
 14  0x0E  0016  U+000E  U+0000000E  SO     Shift Out
 15  0x0F  0017  U+000F  U+0000000F  SI     Shift In
 16  0x10  0020  U+0010  U+00000010  DLE    Data Link Escape
 17  0x11  0021  U+0011  U+00000011  DC1    Device Control 1
 18  0x12  0022  U+0012  U+00000012  DC2    Device Control 2
 19  0x13  0023  U+0013  U+00000013  DC3    Device Control 3
 20  0x14  0024  U+0014  U+00000014  DC4    Device Control 4
 21  0x15  0025  U+0015  U+00000015  NAK    Negative Acknowledge
 22  0x16  0026  U+0016  U+00000016  SYN    Synchronous Idle
 23  0x17  0027  U+0017  U+00000017  ETB    End of Transmission Block
 24  0x18  0030  U+0018  U+00000018  CAN    Cancel
 25  0x19  0031  U+0019  U+00000019  EM     End of Medium
 26  0x1A  0032  U+001A  U+0000001A  SUB    Substitute
 27  0x1B  0033  U+001B  U+0000001B  ESC    Escape
 28  0x1C  0034  U+001C  U+0000001C  FS     File Separator
 29  0x1D  0035  U+001D  U+0000001D  GS     Group Separator
 30  0x1E  0036  U+001E  U+0000001E  RS     Record Separator
 31  0x1F  0037  U+001F  U+0000001F  US     Unit Separator
 32  0x20  0040  U+0020  U+00000020          Space
 33  0x21  0041  U+0021  U+00000021  !     
 34  0x22  0042  U+0022  U+00000022  "     
 35  0x23  0043  U+0023  U+00000023  #     
 36  0x24  0044  U+0024  U+00000024  $     
 37  0x25  0045  U+0025  U+00000025  %     
 38  0x26  0046  U+0026  U+00000026  &     
 39  0x27  0047  U+0027  U+00000027  '     
 40  0x28  0050  U+0028  U+00000028  (     
 41  0x29  0051  U+0029  U+00000029  )     
 42  0x2A  0052  U+002A  U+0000002A  *     
 43  0x2B  0053  U+002B  U+0000002B  +     
 44  0x2C  0054  U+002C  U+0000002C  ,     
 45  0x2D  0055  U+002D  U+0000002D  -     
 46  0x2E  0056  U+002E  U+0000002E  .     
 47  0x2F  0057  U+002F  U+0000002F  /     
 48  0x30  0060  U+0030  U+00000030  0     
 49  0x31  0061  U+0031  U+00000031  1     
 50  0x32  0062  U+0032  U+00000032  2     
 51  0x33  0063  U+0033  U+00000033  3     
 52  0x34  0064  U+0034  U+00000034  4     
 53  0x35  0065  U+0035  U+00000035  5     
 54  0x36  0066  U+0036  U+00000036  6     
 55  0x37  0067  U+0037  U+00000037  7     
 56  0x38  0070  U+0038  U+00000038  8     
 57  0x39  0071  U+0039  U+00000039  9     
 58  0x3A  0072  U+003A  U+0000003A  :     
 59  0x3B  0073  U+003B  U+0000003B  ;     
 60  0x3C  0074  U+003C  U+0000003C  <     
 61  0x3D  0075  U+003D  U+0000003D  =     
 62  0x3E  0076  U+003E  U+0000003E  >     
 63  0x3F  0077  U+003F  U+0000003F  ?     
 64  0x40  0100  U+0040  U+00000040  @     
 65  0x41  0101  U+0041  U+00000041  A     
 66  0x42  0102  U+0042  U+00000042  B     
 67  0x43  0103  U+0043  U+00000043  C     
 68  0x44  0104  U+0044  U+00000044  D     
 69  0x45  0105  U+0045  U+00000045  E     
 70  0x46  0106  U+0046  U+00000046  F     
 71  0x47  0107  U+0047  U+00000047  G     
 72  0x48  0110  U+0048  U+00000048  H     
 73  0x49  0111  U+0049  U+00000049  I     
 74  0x4A  0112  U+004A  U+0000004A  J     
 75  0x4B  0113  U+004B  U+0000004B  K     
 76  0x4C  0114  U+004C  U+0000004C  L     
 77  0x4D  0115  U+004D  U+0000004D  M     
 78  0x4E  0116  U+004E  U+0000004E  N     
 79  0x4F  0117  U+004F  U+0000004F  O     
 80  0x50  0120  U+0050  U+00000050  P     
 81  0x51  0121  U+0051  U+00000051  Q     
 82  0x52  0122  U+0052  U+00000052  R     
 83  0x53  0123  U+0053  U+00000053  S     
 84  0x54  0124  U+0054  U+00000054  T     
 85  0x55  0125  U+0055  U+00000055  U     
 86  0x56  0126  U+0056  U+00000056  V     
 87  0x57  0127  U+0057  U+00000057  W     
 88  0x58  0130  U+0058  U+00000058  X     
 89  0x59  0131  U+0059  U+00000059  Y     
 90  0x5A  0132  U+005A  U+0000005A  Z     
 91  0x5B  0133  U+005B  U+0000005B  [     
 92  0x5C  0134  U+005C  U+0000005C  \     
 93  0x5D  0135  U+005D  U+0000005D  ]     
 94  0x5E  0136  U+005E  U+0000005E  ^     
 95  0x5F  0137  U+005F  U+0000005F  _     
 96  0x60  0140  U+0060  U+00000060  `     
 97  0x61  0141  U+0061  U+00000061  a     
 98  0x62  0142  U+0062  U+00000062  b     
 99  0x63  0143  U+0063  U+00000063  c     
100  0x64  0144  U+0064  U+00000064  d     
101  0x65  0145  U+0065  U+00000065  e     
102  0x66  0146  U+0066  U+00000066  f     
103  0x67  0147  U+0067  U+00000067  g     
104  0x68  0150  U+0068  U+00000068  h     
105  0x69  0151  U+0069  U+00000069  i     
106  0x6A  0152  U+006A  U+0000006A  j     
107  0x6B  0153  U+006B  U+0000006B  k     
108  0x6C  0154  U+006C  U+0000006C  l     
109  0x6D  0155  U+006D  U+0000006D  m     
110  0x6E  0156  U+006E  U+0000006E  n     
111  0x6F  0157  U+006F  U+0000006F  o     
112  0x70  0160  U+0070  U+00000070  p     
113  0x71  0161  U+0071  U+00000071  q     
114  0x72  0162  U+0072  U+00000072  r     
115  0x73  0163  U+0073  U+00000073  s     
116  0x74  0164  U+0074  U+00000074  t     
117  0x75  0165  U+0075  U+00000075  u     
118  0x76  0166  U+0076  U+00000076  v     
119  0x77  0167  U+0077  U+00000077  w     
120  0x78  0170  U+0078  U+00000078  x     
121  0x79  0171  U+0079  U+00000079  y     
122  0x7A  0172  U+007A  U+0000007A  z     
123  0x7B  0173  U+007B  U+0000007B  {     
124  0x7C  0174  U+007C  U+0000007C  |     
125  0x7D  0175  U+007D  U+0000007D  }     
126  0x7E  0176  U+007E  U+0000007E  ~     
127  0x7F  0177  U+007F  U+0000007F  DEL    Delete
128  0x80  0200  U+0080  U+00000080  €      Euro Sign
129  0x81  0201  U+0081  U+00000081          <control>
130  0x82  0202  U+0082  U+00000082  ‚      Single Low-9 Quotation Mark
131  0x83  0203  U+0083  U+00000083  ƒ      Latin Small Letter F with Hook
132  0x84  0204  U+0084  U+00000084  „      Double Low-9 Quotation Mark
133  0x85  0205  U+0085  U+00000085  …      Horizontal Ellipsis
134  0x86  0206  U+0086  U+00000086  †      Dagger
135  0x87  0207  U+0087  U+00000087  ‡      Double Dagger
136  0x88  0210  U+0088  U+00000088  ˆ      Modifier Letter Circumflex Accent
137  0x89  0211  U+0089  U+00000089  ‰      Per Mille Sign
138  0x8A  0212  U+008A  U+0000008A  Š      Latin Capital Letter S with Caron
139  0x8B  0213  U+008B  U+0000008B  ‹      Single Left-Pointing Angle Quotation Mark
140  0x8C  0214  U+008C  U+0000008C  Œ      Latin Capital Ligature OE
141  0x8D  0215  U+008D  U+0000008D          <control>
142  0x8E  0216  U+008E  U+0000008E  Ž      Latin Capital Letter Z with Caron
143  0x8F  0217  U+008F  U+0000008F          <control>
144  0x90  0220  U+0090  U+00000090          <control>
145  0x91  0221  U+0091  U+00000091  ‘      Left Single Quotation Mark
146  0x92  0222  U+0092  U+00000092  ’      Right Single Quotation Mark
147  0x93  0223  U+0093  U+00000093  “      Left Double Quotation Mark
148  0x94  0224  U+0094  U+00000094  ”      Right Double Quotation Mark
149  0x95  0225  U+0095  U+00000095  •      Bullet
150  0x96  0226  U+0096  U+00000096  –      En Dash
151  0x97  0227  U+0097  U+00000097  —      Em Dash
152  0x98  0230  U+0098  U+00000098  ˜      Small Tilde
153  0x99  0231  U+0099  U+00000099  ™      Trade Mark Sign
154  0x9A  0232  U+009A  U+0000009A  š      Latin Small Letter S with Caron
155  0x9B  0233  U+009B  U+0000009B  ›      Single Right-Pointing Angle Quotation Mark
156  0x9C  0234  U+009C  U+0000009C  œ      Latin Small Ligature OE
157  0x9D  0235  U+009D  U+0000009D          <control>
158  0x9E  0236  U+009E  U+0000009E  ž      Latin Small Letter Z with Caron
159  0x9F  0237  U+009F  U+0000009F  Ÿ      Latin Capital Letter Y with Diaeresis
160  0xA0  0240  U+00A0  U+000000A0          Non-breaking Space
161  0xA1  0241  U+00A1  U+000000A1  ¡      Inverted Exclamation Mark
162  0xA2  0242  U+00A2  U+000000A2  ¢      Cent Sign
163  0xA3  0243  U+00A3  U+000000A3  £      Pound Sign
164  0xA4  0244  U+00A4  U+000000A4  ¤      Currency Sign
165  0xA5  0245  U+00A5  U+000000A5  ¥      Yen Sign
166  0xA6  0246  U+00A6  U+000000A6  ¦      Broken Bar
167  0xA7  0247  U+00A7  U+000000A7  §      Section Sign
168  0xA8  0250  U+00A8  U+000000A8  ¨      Diaeresis
169  0xA9  0251  U+00A9  U+000000A9  ©      Copyright Sign
170  0xAA  0252  U+00AA  U+000000AA  ª      Feminine Ordinal Indicator
171  0xAB  0253  U+00AB  U+000000AB  «      Left-Pointing Double Angle Quotation Mark
172  0xAC  0254  U+00AC  U+000000AC  ¬      Not Sign
173  0xAD  0255  U+00AD  U+000000AD  ­      Soft Hyphen
174  0xAE  0256  U+00AE  U+000000AE  ®      Registered Sign
175  0xAF  0257  U+00AF  U+000000AF  ¯      Macron
176  0xB0  0260  U+00B0  U+000000B0  °      Degree Sign
177  0xB1  0261  U+00B1  U+000000B1  ±      Plus-Minus Sign
178  0xB2  0262  U+00B2  U+000000B2  ²      Superscript Two
179  0xB3  0263  U+00B3  U+000000B3  ³      Superscript Three
180  0xB4  0264  U+00B4  U+000000B4  ´      Acute Accent
181  0xB5  0265  U+00B5  U+000000B5  µ      Micro Sign
182  0xB6  0266  U+00B6  U+000000B6  ¶      Pilcrow Sign
183  0xB7  0267  U+00B7  U+000000B7  ·      Middle Dot
184  0xB8  0270  U+00B8  U+000000B8  ¸      Cedilla
185  0xB9  0271  U+00B9  U+000000B9  ¹      Superscript One
186  0xBA  0272  U+00BA  U+000000BA  º      Masculine Ordinal Indicator
187  0xBB  0273  U+00BB  U+000000BB  »      Right-Pointing Double Angle Quotation Mark
188  0xBC  0274  U+00BC  U+000000BC  ¼      Vulgar Fraction One Quarter
189  0xBD  0275  U+00BD  U+000000BD  ½      Vulgar Fraction One Half
190  0xBE  0276  U+00BE  U+000000BE  ¾      Vulgar Fraction Three Quarters
191  0xBF  0277  U+00BF  U+000000BF  ¿      Inverted Question Mark
192  0xC0  0300  U+00C0  U+000000C0  À      Latin Capital Letter A with Grave
193  0xC1  0301  U+00C1  U+000000C1  Á      Latin Capital Letter A with Acute
194  0xC2  0302  U+00C2  U+000000C2  Â      Latin Capital Letter A with Circumflex
195  0xC3  0303  U+00C3  U+000000C3  Ã      Latin Capital Letter A with Tilde
196  0xC4  0304  U+00C4  U+000000C4  Ä      Latin Capital Letter A with Diaeresis
197  0xC5  0305  U+00C5  U+000000C5  Å      Latin Capital Letter A with Ring Above
198  0xC6  0306  U+00C6  U+000000C6  Æ      Latin Capital Ligature AE
199  0xC7  0307  U+00C7  U+000000C7  Ç      Latin Capital Letter C with Cedilla
200  0xC8  0310  U+00C8  U+000000C8  È      Latin Capital Letter E with Grave
201  0xC9  0311  U+00C9  U+000000C9  É      Latin Capital Letter E with Acute
202  0xCA  0312  U+00CA  U+000000CA  Ê      Latin Capital Letter E with Circumflex
203  0xCB  0313  U+00CB  U+000000CB  Ë      Latin Capital Letter E with Diaeresis
204  0xCC  0314  U+00CC  U+000000CC  Ì      Latin Capital Letter I with Grave
205  0xCD  0315  U+00CD  U+000000CD  Í      Latin Capital Letter I with Acute
206  0xCE  0316  U+00CE  U+000000CE  Î      Latin Capital Letter I with Circumflex
207  0xCF  0317  U+00CF  U+000000CF  Ï      Latin Capital Letter I with Diaeresis
208  0xD0  0320  U+00D0  U+000000D0  Ð      Latin Capital Letter Eth
209  0xD1  0321  U+00D1  U+000000D1  Ñ      Latin Capital Letter N with Tilde
210  0xD2  0322  U+00D2  U+000000D2  Ò      Latin Capital Letter O with Grave
211  0xD3  0323  U+00D3  U+000000D3  Ó      Latin Capital Letter O with Acute
212  0xD4  0324  U+00D4  U+000000D4  Ô      Latin Capital Letter O with Circumflex
213  0xD5  0325  U+00D5  U+000000D5  Õ      Latin Capital Letter O with Tilde
214  0xD6  0326  U+00D6  U+000000D6  Ö      Latin Capital Letter O with Diaeresis
215  0xD7  0327  U+00D7  U+000000D7  ×      Multiplication Sign
216  0xD8  0330  U+00D8  U+000000D8  Ø      Latin Capital Letter O with Stroke
217  0xD9  0331  U+00D9  U+000000D9  Ù      Latin Capital Letter U with Grave
218  0xDA  0332  U+00DA  U+000000DA  Ú      Latin Capital Letter U with Acute
219  0xDB  0333  U+00DB  U+000000DB  Û      Latin Capital Letter U with Circumflex
220  0xDC  0334  U+00DC  U+000000DC  Ü      Latin Capital Letter U with Diaeresis
221  0xDD  0335  U+00DD  U+000000DD  Ý      Latin Capital Letter Y with Acute
222  0xDE  0336  U+00DE  U+000000DE  Þ      Latin Capital Letter Thorn
223  0xDF  0337  U+00DF  U+000000DF  ß      Latin Small Letter Sharp S
224  0xE0  0340  U+00E0  U+000000E0  à      Latin Small Letter A with Grave
225  0xE1  0341  U+00E1  U+000000E1  á      Latin Small Letter A with Acute
226  0xE2  0342  U+00E2  U+000000E2  â      Latin Small Letter A with Circumflex
227  0xE3  0343  U+00E3  U+000000E3  ã      Latin Small Letter A with Tilde
228  0xE4  0344  U+00E4  U+000000E4  ä      Latin Small Letter A with Diaeresis
229  0xE5  0345  U+00E5  U+000000E5  å      Latin Small Letter A with Ring Above
230  0xE6  0346  U+00E6  U+000000E6  æ      Latin Small Ligature AE
231  0xE7  0347  U+00E7  U+000000E7  ç      Latin Small Letter C with Cedilla
232  0xE8  0350  U+00E8  U+000000E8  è      Latin Small Letter E with Grave
233  0xE9  0351  U+00E9  U+000000E9  é      Latin Small Letter E with Acute
234  0xEA  0352  U+00EA  U+000000EA  ê      Latin Small Letter E with Circumflex
235  0xEB  0353  U+00EB  U+000000EB  ë      Latin Small Letter E with Diaeresis
236  0xEC  0354  U+00EC  U+000000EC  ì      Latin Small Letter I with Grave
237  0xED  0355  U+00ED  U+000000ED  í      Latin Small Letter I with Acute
238  0xEE  0356  U+00EE  U+000000EE  î      Latin Small Letter I with Circumflex
239  0xEF  0357  U+00EF  U+000000EF  ï      Latin Small Letter I with Diaeresis
240  0xF0  0360  U+00F0  U+000000F0  ð      Latin Small Letter Eth
241  0xF1  0361  U+00F1  U+000000F1  ñ      Latin Small Letter N with Tilde
242  0xF2  0362  U+00F2  U+000000F2  ò      Latin Small Letter O with Grave
243  0xF3  0363  U+00F3  U+000000F3  ó      Latin Small Letter O with Acute
244  0xF4  0364  U+00F4  U+000000F4  ô      Latin Small Letter O with Circumflex
245  0xF5  0365  U+00F5  U+000000F5  õ      Latin Small Letter O with Tilde
246  0xF6  0366  U+00F6  U+000000F6  ö      Latin Small Letter O with Diaeresis
247  0xF7  0367  U+00F7  U+000000F7  ÷      Division Sign
248  0xF8  0370  U+00F8  U+000000F8  ø      Latin Small Letter O with Stroke
249  0xF9  0371  U+00F9  U+000000F9  ù      Latin Small Letter U with Grave
250  0xFA  0372  U+00FA  U+000000FA  ú      Latin Small Letter U with Acute
251  0xFB  0373  U+00FB  U+000000FB  û      Latin Small Letter U with Circumflex
252  0xFC  0374  U+00FC  U+000000FC  ü      Latin Small Letter U with Diaeresis
253  0xFD  0375  U+00FD  U+000000FD  ý      Latin Small Letter Y with Acute
254  0xFE  0376  U+00FE  U+000000FE  þ      Latin Small Letter Thorn
255  0xFF  0377  U+00FF  U+000000FF  ÿ      Latin Small Letter Y with Diaeresis
*/