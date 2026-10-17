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

		$(let ((val (ly:parser-lookup 'easy))) (if (null? val) #{ #} val))

		\clef "treble"
		\key c \major
		r2 r16 a' b' c'' d'' e'' f'' g''  |
		a'' 16 g'' f'' g'' f'' e'' f'' e'' d'' e'' d'' c'' d'' c'' b' a'  |
		c'' 16 b' a' g' ~ g' 8 c'' 16 b' a' g' 8. g' 16 a' c'' e''  |
		f'' 16 e'' c'' a' ~ a' e'' f'' e'' c'' a' 8. ~ a' 4  |
%% 5
		g' 2. g' 8 f'  |
		e' 4 f' 4. g' 8 a' 4  |
		g' 2. r4  |
		r8 f' e' f' 2 r8  |
		r8 g' g' g' 2 r8  |
%% 10
		r8 f' e' f' 2 r8  |
		r8 g' g' g' 2 r8  |
		r8 f' e' f' 4 g' 8 a' b'  |
		c'' 1  |
		b' 2 c'' 4 d''  |
%% 15
		c'' 16 b' c'' 2..  |
		b' 2 ~ b' 8 a' g' a' ~  |
		a' 4 g' f' e'  |
		d' 8. e' f' 4 g' 8 a' b'  |
		c'' 8. d'' e'' 4 f'' 8 g'' 4  |
%% 20
		g'' 1  |
		r8 f'' e'' f'' 4 g'' 8 a'' 4  |
		g'' 2. r4  |
		r8 f'' e'' f'' 2 r8  |
		r8 g'' g'' g'' 2 r8  |
%% 25
		r8 f'' e'' f'' 2 r8  |
		r8 g'' g'' g'' 2 r8  |
		r8 f'' e'' f'' 2 r8  |
		g'' 4. g'' 8 ~ g'' 2 ~  |
		g'' 1
	}
>>
