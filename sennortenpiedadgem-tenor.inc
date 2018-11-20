\context Staff = "tenor" \with { \consists Ambitus_engraver } <<
	\set Staff.instrumentName = "Tenor"
	\set Staff.shortInstrumentName = "T."
	\set Staff.midiInstrument = "Voice Oohs"
	\set Score.skipBars = ##t
	\set Staff.printKeyCancellation = ##f
	\new Voice \global
	\new Voice \globalTempo

	\context Voice = "voz-tenor" {
		\override Voice.TextScript #'padding = #2.0
		\override MultiMeasureRest #'expand-limit = 1

		\time 4/4
		\clef "treble_8"
		\key c \major

		R1*4  |
%% 5
		r4 e 8 e ~ e 2  |
		r4 d 8 d ~ d 2  |
		r4 e 8 e ~ e d c d ~  |
		d 2 r4 c 8 d  |
		e 4 ( g 8 ) e ~ e d c d ~  |
%% 10
		d 2 r4 c 8 d  |
		e 4 ( g 8 ) e ~ e d c d ~  |
		d 1  |
		r4 a 8 a a 4 e 8 g ( ~
		% warning: overlong bar truncated here |
		g 2. f 4  |
%% 15
		e 4 ) a 8 a a 4 e 8 g ~  |
		g 2 r8 f e f ~  |
		f 4 e c -\staccato e 8 g ~  |
		g 1 ~  |
		g 1  |
%% 20
		r4 e 8 e ~ e 2  |
		r4 d 8 d ~ d 2  |
		r4 e 8 e ~ e d c d ~  |
		d 2 r4 c 8 d  |
		e 4 ( g 8 ) e ~ e d c d ~  |
%% 25
		d 2 r4 c 8 d  |
		e 4 ( g 8 ) e ~ e d c d ~  |
		d 2 r4 c 8 d  |
		e 4 ( g 8 ) e ~ e 2  |
		R1  |
		\bar "|."
	}

	\lyricsto "voz-tenor" \new Lyrics \lyricmode {
		% sennor...
		Se -- ñor, Se -- ñor,
		Se -- ñor, ten pie -- dad, __
		de no -- so -- tros ten pie -- dad, __
		de no -- so -- tros ten pie -- dad. __

		% cristo, ten piedad...
		Cris -- to, ten pie -- dad, __
		Cris -- to, ten pie -- dad, __
		de no -- so -- tros ten pie -- dad. __

		% sennor...
		Se -- ñor, Se -- ñor,
		Se -- ñor, ten pie -- dad, __
		de no -- so -- tros ten pie -- dad, __
		de no -- so -- tros ten pie -- dad, __
		de no -- so -- tros.
	}
>>
