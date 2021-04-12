/*
* Generated on Thursday, January 14, 2021 at 2:29:25 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/TextInput/TextInput_ja.bundle/TextInput_ja
*/

#import <TextInputCore/TIKeyboardInputManager_zh_ja.h>

@class TIWordSearch, NSArray, NSString;

@interface TIKeyboardInputManager_ja_SegmentAdjust : TIKeyboardInputManager_zh_ja {

	BOOL _romajiEnabled;
	TIWordSearch* _wordSearch;
	NSArray* _segments;
	unsigned long long _index;
	unsigned long long _breaktAt;
	NSString* _inputString;
	NSString* _composingInputString;
	NSString* _contextString;
	NSArray* _contextSegments;
	unsigned long long _segmentLength;
	/*^block*/id _candidateGenerationCompletionHandler;

}

@property (assign,nonatomic) unsigned long long breaktAt;                        //@synthesize breaktAt=_breaktAt - In the implementation block
@property (nonatomic,readonly) NSString * inputString;                           //@synthesize inputString=_inputString - In the implementation block
@property (nonatomic,readonly) NSString * composingInputString;                  //@synthesize composingInputString=_composingInputString - In the implementation block
@property (nonatomic,readonly) NSString * contextString;                         //@synthesize contextString=_contextString - In the implementation block
@property (nonatomic,copy) NSArray * contextSegments;                            //@synthesize contextSegments=_contextSegments - In the implementation block
@property (assign,nonatomic) unsigned long long segmentLength;                   //@synthesize segmentLength=_segmentLength - In the implementation block
@property (nonatomic,copy) id candidateGenerationCompletionHandler;              //@synthesize candidateGenerationCompletionHandler=_candidateGenerationCompletionHandler - In the implementation block
@property (assign,nonatomic) BOOL romajiEnabled;                                 //@synthesize romajiEnabled=_romajiEnabled - In the implementation block
@property (nonatomic,copy) NSArray * segments;                                   //@synthesize segments=_segments - In the implementation block
@property (assign,nonatomic) unsigned long long index;                           //@synthesize index=_index - In the implementation block
-(BOOL)delayedCandidateList;
-(BOOL)usesCandidateSelection;
-(unsigned long long)index;
-(void)setIndex:(unsigned long long)arg1 ;
-(BOOL)supportsSetPhraseBoundary;
-(unsigned)inputIndex;
-(void)setSegments:(NSArray *)arg1 ;
-(id)keyboardBehaviors;
-(NSArray *)segments;
-(id)markedText;
-(NSString *)inputString;
-(id)candidateResultSet;
-(BOOL)usesLiveConversion;
-(void)loadDictionaries;
-(void)syncToKeyboardState:(id)arg1 from:(id)arg2 afterContextChange:(BOOL)arg3 ;
-(id)handleKeyboardInput:(id)arg1 ;
-(BOOL)_adjustPhraseBoundaryInForwardDirection:(BOOL)arg1 granularity:(int)arg2 ;
-(id)wordSearch;
-(void)commitComposition;
-(void)composeTextWith:(id)arg1 ;
-(void)openCandidateGenerationContextWithCompletionHandler:(/*^block*/id)arg1 ;
-(BOOL)closeCandidateGenerationContextWithResults:(id)arg1 ;
-(void)loadFavoniusTypingModel;
-(id)candidateGenerationCompletionHandler;
-(void)setCandidateGenerationCompletionHandler:(id)arg1 ;
-(NSString *)contextString;
-(void)_notifyUpdateCandidates:(id)arg1 forOperation:(id)arg2 ;
-(id)initWithConfig:(id)arg1 keyboardState:(id)arg2 segments:(id)arg3 at:(unsigned long long)arg4 romajiEnabled:(BOOL)arg5 wordSearch:(id)arg6 ;
-(void)updateInputString;
-(BOOL)romajiEnabled;
-(unsigned long long)segmentLength;
-(NSString *)composingInputString;
-(NSArray *)contextSegments;
-(void)generateNewSegments:(unsigned long long)arg1 ;
-(unsigned long long)breaktAt;
-(void)setBreaktAt:(unsigned long long)arg1 ;
-(void)setContextSegments:(NSArray *)arg1 ;
-(void)setSegmentLength:(unsigned long long)arg1 ;
-(void)setRomajiEnabled:(BOOL)arg1 ;
@end
