// A few characters have an alternative representation, called a trigraph sequence.
// A trigraph is a three-character sequence that represents a single character and the sequence always starts with two question marks.
// Trigraphs are expanded anywhere they appear, including within string literals and character literals, in comments{Comments.cpp}, and in preprocessor directives.
// Following are most frequently used trigraph sequences −

// Trigraph	Replacement
// ??=	#
// ??/	\
// ??'	^
// ??(	[
// ??)	]
// ??!	|
// ??<	{
// ??>	}
// ??-	~

// All the compilers do not support trigraphs and they are not advised to be used because of their confusing nature.