\context Staff = "violin" \with { \consists Ambitus_engraver } <<
	\set Staff.instrumentName = "Violín"
	\set Staff.shortInstrumentName = "V."
	\set Score.skipBars = ##t
	\set Staff.printKeyCancellation = ##f
	\new Voice \global
	\new Voice \globalTempo

	\context Voice = "violin" {
		\override Voice.TextScript #'padding = #2.0
		\override MultiMeasureRest #'expand-limit = 1

		\clef "treble"
		\key c \major

		r2 r16 a' b' c'' d'' e'' f'' g''  |
		a'' 16 g'' f'' g'' f'' e'' f'' e'' d'' e'' d'' c'' d'' c'' b' a'  |
		c'' 16 b' a' g' ~ g' 8 c'' 16 b' a' g' 8. g' 16 a' c'' e''  |
		f'' 16 e'' c'' a' ~ a' e'' f'' e'' c'' a' 8. a' 4  |
%% 5
		g' 1  |
	}

>>
