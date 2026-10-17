\context Staff = "cello" \with { \consists Ambitus_engraver } <<
	\set Staff.instrumentName = "Cello"
	\set Staff.shortInstrumentName = "C."
	\set Score.skipBars = ##t
	\set Staff.printKeyCancellation = ##f
	\new Voice \global
	\new Voice \globalTempo

	\context Voice = "cello" {
		\override Voice.TextScript #'padding = #2.0
		\override MultiMeasureRest #'expand-limit = 1

		$(let ((val (ly:parser-lookup 'easy))) (if (null? val) #{ #} val))

		\clef "bass"
		\key c \major
		c 1  |
		d 1  |
		c 1  |
		d 2. d 4  |
%% 5
		c 1  |
		d 4. f e 4  |
		c 2 ~ c 8 a, c 4  |
		d 4. f e 4  |
		c 2 ~ c 8 a, c 4  |
%% 10
		d 4. f a 4  |
		g 4. e c 4  |
		d 4. f g 4  |
		a 1  |
		g 2. f 4  |
%% 15
		e 1  |
		d 4 c 8 b, 4. r4  |
		f 4 e d c  |
		b, 8. c d 4 e 8 f g  |
		g 8. f e 4 d 8 c b,  |
%% 20
		c 1  |
		d 4. f e 4  |
		c 2 ~ c 8 a, c 4  |
		d 4. f e 4  |
		c 4. a, 4 g, 8 a, c  |
%% 25
		d 4. f e 4  |
		c 4. c 8 ~ c 2  |
		d 4. f e 4  |
		c 4. c 8 ~ c 2 ~  |
		c 1
		\bar "|."
	}
>>
