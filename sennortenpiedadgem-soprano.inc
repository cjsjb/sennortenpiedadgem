\context Staff = "soprano" \with { \consists Ambitus_engraver } <<
	\set Staff.instrumentName = "Soprano"
	\set Staff.shortInstrumentName = "S."
	\set Staff.midiInstrument = "Voice Oohs"
	\set Score.skipBars = ##t
	\set Staff.printKeyCancellation = ##f
	\new Voice \global
	\new Voice \globalTempo

	\context Voice = "voz-soprano" {
		\override Voice.TextScript #'padding = #2.0
		\override MultiMeasureRest #'expand-limit = 1

		\time 4/4
		\clef "treble"

		R1*4  |
%% 5
		r4 g' 8 g' ~ g' 2  |
		r4 f' 8 f' ~ f' 2  |
		r4 g' 8 g' ~ g' f' e' f' ~  |
		f' 2 r4 e' 8 f'  |
		g' 4 ( b' 8 ) g' ~ g' f' e' f' ~  |
%% 10
		f' 2 r4 e' 8 f'  |
		g' 4 ( b' 8 ) g' ~ g' f' e' f' ~  |
		f' 1  |
		r4 a' 8 a' a' 4 e' 8 g' ( ~ 
		% warning: overlong bar truncated here |
		g' 2. f' 4  |
%% 15
		e' 8 ) r a' a' a' 4 e' 8 g' ~  |
		g' 2 r8 f' e' f' ~  |
		f' 4 e' c' -\staccato e' 8 d' ~  |
		d' 1 ~  |
		d' 1  |
%% 20
		r4 g' 8 g' ~ g' 2  |
		r4 f' 8 f' ~ f' 2  |
		r4 g' 8 g' ~ g' f' e' f' ~  |
		f' 2 r4 e' 8 f'  |
		g' 4 ( b' 8 ) g' ~ g' f' e' f' ~  |
%% 25
		f' 2 r4 e' 8 f'  |
		g' 4 ( b' 8 ) g' ~ g' f' e' f' ~  |
		f' 2 r4 e' 8 f'  |
		g' 4 ( b' 8 ) g' ~ g' 2  |
		R1  |
		\bar "|."
	}

	\new Lyrics \lyricsto "voz-soprano" {
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
