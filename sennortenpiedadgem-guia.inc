\context Staff = "guia" \with {
	\consists Ambitus_engraver
	%fontSize = #-3
	%\override StaffSymbol #'staff-space = #(magstep -3)
} <<
	\set Staff.instrumentName = "Voz"
	\set Staff.shortInstrumentName = ##f
	\set Staff.midiInstrument = "Voice Oohs"
	\set Score.skipBars = ##t
	\set Staff.printKeyCancellation = ##f
	\new Voice \global
	\new Voice \globalTempo

	\context Voice = "voz-guia" {
		\override Voice.TextScript #'padding = #2.0
		\override MultiMeasureRest #'expand-limit = 1

		$(let ((val (ly:parser-lookup 'easy))) (if (null? val) #{ #} val))

		\time 4/4
		\clef "treble"
		\key c \major

		r2 r16 a' b' c'' d'' e'' f'' g''  |
		a'' 16 g'' f'' g'' f'' e'' f'' e'' d'' e'' d'' c'' d'' c'' b' a'  |
		c'' 16 b' a' g' ~ g' 8 c'' 16 b' a' g' 8. g' 16 a' c'' e''  |
		f'' 16 e'' c'' a' ~ a' e'' f'' e'' c'' a' 8. ~ a' 4  |
%% 5
		g' 4 g' 8 g' ~ g' 2  |
		r4 f' 8 f' ~ f' 2  |
		r4 g' 8 g' ~ g' f' e' f' ~  |
		f' 2 r4 e' 8 f'  |
		g' 4 ( b' 8 ) g' ~ g' f' e' f' ~  |
%% 10
		f' 2 r4 e' 8 f'  |
		g' 4 ( b' 8 ) g' ~ g' f' e' f' ~  |
		f' 1  |
		r4 a' 8 a' a' 4 e' 8 g' ( ~  |
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

	\new Lyrics \lyricsto "voz-guia" {
		_ _ _ _ _ _ _ _ _ _
		_ _ _ _ _ _ _ _ _ _
		_ _ _ _ _ _ _ _ _ _
		_ _ _ _ _ _ _ _ _ _
		_ _ _ _ _
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
