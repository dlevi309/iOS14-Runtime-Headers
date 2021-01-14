/*
* Generated on Thursday, January 14, 2021 at 2:28:39 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/TextInputChinese.framework/TextInputChinese
*/

#import <TextInputChinese/TextInputChinese-Structs.h>
#import <TextInputChinese/TIKeyboardInputManagerChinese.h>
#import <libobjc.A.dylib/TIKeyboardInputManagerChineseCompletion.h>

@class CIMCandidateData, NSOperationQueue, TIConversionHistory, NSString, NSArray, TIMecabraIMLogger, TIKeyboardCandidateResultSet, TIKeyboardCandidate;

@interface TIKeyboardInputManagerChinesePhonetic : TIKeyboardInputManagerChinese <TIKeyboardInputManagerChineseCompletion> {

	BOOL _usesCandidateSelection;
	CIMCandidateData* _candidateData;
	NSOperationQueue* _operationQueue;
	BOOL _isCandidateSelected;
	BOOL _acceptingCandidate;
	BOOL _isInAmbiguousMode;
	BOOL _lockingFirstPinyinSyllable;
	BOOL _filterCandidatesUsingInputIndex;
	BOOL _shouldClearBeforeContinuousPath;
	BOOL _skipSetMarkedTextDuringInput;
	TIConversionHistory* _conversionHistory;
	NSString* _remainingInput;
	NSString* _replacedAmbiguousPinyinSyllable;
	NSString* _replacementUnambiguousPinyinSyllable;
	NSString* _composedTextBeforeFirstSyllableLocked;
	NSArray* _pinyinSyllableCandidates;
	unsigned long long _selectedPinyinSyllableCandidateIndex;
	TIMecabraIMLogger* _logger;
	TIKeyboardCandidateResultSet* _mostRecentCandidateResultSetPendingDisplay;

}

@property (getter=isPhraseBoundarySet,nonatomic,readonly) BOOL phraseBoundarySet; 
@property (nonatomic,readonly) TIKeyboardCandidate * candidateForInlineTextSegmentation; 
@property (nonatomic,copy) NSString * remainingInput;                                                                //@synthesize remainingInput=_remainingInput - In the implementation block
@property (nonatomic,readonly) NSString * unconvertedInput; 
@property (assign,nonatomic) BOOL filterCandidatesUsingInputIndex;                                                   //@synthesize filterCandidatesUsingInputIndex=_filterCandidatesUsingInputIndex - In the implementation block
@property (nonatomic,copy) NSString * replacedAmbiguousPinyinSyllable;                                               //@synthesize replacedAmbiguousPinyinSyllable=_replacedAmbiguousPinyinSyllable - In the implementation block
@property (nonatomic,copy) NSString * replacementUnambiguousPinyinSyllable;                                          //@synthesize replacementUnambiguousPinyinSyllable=_replacementUnambiguousPinyinSyllable - In the implementation block
@property (nonatomic,copy) NSString * composedTextBeforeFirstSyllableLocked;                                         //@synthesize composedTextBeforeFirstSyllableLocked=_composedTextBeforeFirstSyllableLocked - In the implementation block
@property (nonatomic,retain) NSArray * pinyinSyllableCandidates;                                                     //@synthesize pinyinSyllableCandidates=_pinyinSyllableCandidates - In the implementation block
@property (assign,nonatomic) unsigned long long selectedPinyinSyllableCandidateIndex;                                //@synthesize selectedPinyinSyllableCandidateIndex=_selectedPinyinSyllableCandidateIndex - In the implementation block
@property (nonatomic,retain) TIKeyboardCandidateResultSet * mostRecentCandidateResultSetPendingDisplay;              //@synthesize mostRecentCandidateResultSetPendingDisplay=_mostRecentCandidateResultSetPendingDisplay - In the implementation block
@property (assign,nonatomic) BOOL shouldClearBeforeContinuousPath;                                                   //@synthesize shouldClearBeforeContinuousPath=_shouldClearBeforeContinuousPath - In the implementation block
@property (nonatomic,copy,readonly) NSString * internalInputString; 
@property (nonatomic,readonly) NSString * convertedInput; 
@property (nonatomic,readonly) BOOL usesGeometryModelData; 
@property (nonatomic,retain) TIConversionHistory * conversionHistory;                                                //@synthesize conversionHistory=_conversionHistory - In the implementation block
@property (assign,nonatomic) BOOL skipSetMarkedTextDuringInput;                                                      //@synthesize skipSetMarkedTextDuringInput=_skipSetMarkedTextDuringInput - In the implementation block
@property (nonatomic,retain) TIMecabraIMLogger * logger;                                                             //@synthesize logger=_logger - In the implementation block
+(Class)wordSearchClass;
+(id)stringFallBackForTenKeyInput:(id)arg1 range:(NSRange)arg2 ;
+(id)stringByRemovingSyllableSeparatorsFromString:(id)arg1 ;
+(id)directlyCommittedCharacterSetForEmptyInline;
+(id)ambiguousPinyinSet;
+(id)ambiguousDefaults;
-(BOOL)suppliesCompletions;
-(BOOL)usesAutoDeleteWord;
-(BOOL)usesCandidateSelection;
-(void)_nop;
-(id)locale;
-(void)suspend;
-(BOOL)supportsNumberKeySelection;
-(BOOL)supportsSetPhraseBoundary;
-(unsigned)inputIndex;
-(void)setInput:(id)arg1 ;
-(void)setInHardwareKeyboardMode:(BOOL)arg1 ;
-(void)clearInput;
-(void)lastAcceptedCandidateCorrected;
-(id)defaultCandidate;
-(id)searchStringForMarkedText;
-(BOOL)ignoresDeadKeys;
-(id)keyboardBehaviors;
-(BOOL)shouldAddModifierSymbolsToWordCharacters;
-(void)setLogger:(TIMecabraIMLogger *)arg1 ;
-(TIMecabraIMLogger *)logger;
-(BOOL)doesComposeText;
-(BOOL)commitsAcceptedCandidate;
-(id)inputString;
-(unsigned)inputCount;
-(unsigned long long)phraseBoundary;
-(id)sentenceDelimitingCharacters;
-(id)candidateResultSet;
-(void)resume;
-(BOOL)suppressCompletionsForFieldEditor;
-(void)dealloc;
-(BOOL)shouldExtendPriorWord;
-(id)initWithConfig:(id)arg1 keyboardState:(id)arg2 ;
-(BOOL)shouldDelayUpdateComposedText;
-(NSRange)analysisStringRange;
-(void)updateComposedText;
-(id)convertInputsToSyntheticInputUptoCount:(int)arg1 ;
-(id)handleAcceptedCandidate:(id)arg1 keyboardState:(id)arg2 ;
-(long long)addTouch:(id)arg1 shouldHitTest:(BOOL)arg2 ;
-(void)storeLanguageModelDynamicDataIncludingCache;
-(BOOL)supportsPerRecipientLearning;
-(void)syncToKeyboardState:(id)arg1 from:(id)arg2 afterContextChange:(BOOL)arg3 ;
-(id)handleKeyboardInput:(id)arg1 ;
-(BOOL)supportsLearning;
-(id)externalStringToInternal:(id)arg1 ;
-(id)internalStringToExternal:(id)arg1 ;
-(void)setAutoCorrects:(BOOL)arg1 ;
-(id)newInputManagerState;
-(void)syncToLayoutState:(id)arg1 ;
-(id)keyboardConfigurationLayoutTag;
-(id)rawInputString;
-(void)addInput:(id)arg1 withContext:(id)arg2 ;
-(void)inputLocationChanged;
-(id)didAcceptCandidate:(id)arg1 ;
-(NSString *)remainingInput;
-(unsigned)internalIndexToExternal:(unsigned)arg1 ;
-(unsigned)externalIndexToInternal:(unsigned)arg1 ;
-(id)addInput:(id)arg1 flags:(unsigned)arg2 point:(CGPoint)arg3 firstDelete:(unsigned long long*)arg4 ;
-(id)deleteFromInput:(unsigned long long*)arg1 ;
-(BOOL)canStartSentenceAfterString:(id)arg1 ;
-(void)checkAutocorrectionDictionaries;
-(void)setPhraseBoundary:(unsigned long long)arg1 ;
-(id)sortingMethods;
-(void)clearDynamicDictionary;
-(NSString *)convertedInput;
-(int)inputMethodType;
-(void)wordSearchEngineDidFindPredictionCandidates:(id)arg1 ;
-(BOOL)shouldLookForCompletionCandidates;
-(void)setRemainingInput:(NSString *)arg1 ;
-(NSString *)replacedAmbiguousPinyinSyllable;
-(void)setReplacedAmbiguousPinyinSyllable:(NSString *)arg1 ;
-(NSString *)replacementUnambiguousPinyinSyllable;
-(void)setReplacementUnambiguousPinyinSyllable:(NSString *)arg1 ;
-(void)loadAddressBook;
-(void)didDeleteCandidates:(id)arg1 ;
-(void)clearPinyinSyllableSelection;
-(void)revertToAmbiguousPinyinSyllable;
-(NSString *)internalInputString;
-(unsigned)externalIndexToInternal:(unsigned)arg1 shouldBoundToInputCount:(BOOL)arg2 ;
-(BOOL)inputContinuesGB18030OrUnicodeLookupKey:(id)arg1 ;
-(BOOL)isSpecialInput:(id)arg1 ;
-(BOOL)_shouldCommitInputDirectly:(id)arg1 ;
-(id)remapInput:(id)arg1 isFacemarkInput:(BOOL*)arg2 ;
-(BOOL)handleDirectlyCommitForInput:(id)arg1 withContext:(id)arg2 ;
-(void)addInputToInternal:(id)arg1 ;
-(unsigned long long)internalInputCount;
-(unsigned long long)internalInputIndex;
-(void)processDeleteInputs;
-(BOOL)shouldReplaceCharacterOfInputStringBeforeCursorForInput:(id)arg1 ;
-(id)candidateResultSetByWaitingForResults:(BOOL)arg1 ;
-(BOOL)hasExtensionEmojiCandidates;
-(id)phoneticSortingMethod;
-(void)handleAcceptedPinyinDisambiguationCandidate:(id)arg1 keyboardState:(id)arg2 ;
-(BOOL)updateCandidatesByWaitingForResults:(BOOL)arg1 ;
-(id)inputStringForSearch;
-(NSString *)unconvertedInput;
-(id)stringByStrippingConvertedCandidateTextFromString:(id)arg1 ;
-(id)stringByPrependingConvertedCandidateTextToString:(id)arg1 ;
-(void)wordSearchEngineDidFindCandidates:(id)arg1 forOperation:(id)arg2 ;
-(BOOL)isPhraseBoundarySet;
-(TIKeyboardCandidate *)candidateForInlineTextSegmentation;
-(id)segmentedPinyinStringFromString:(id)arg1 ;
-(BOOL)firstSyllableLocked;
-(id)composedTextForSelectedCandidate:(id)arg1 remainingInput:(id)arg2 ;
-(BOOL)generateReanalysisCandidatesIfAppropriate;
-(BOOL)usesGeometryModelData;
-(TIConversionHistory *)conversionHistory;
-(void)setConversionHistory:(TIConversionHistory *)arg1 ;
-(NSString *)composedTextBeforeFirstSyllableLocked;
-(void)setComposedTextBeforeFirstSyllableLocked:(NSString *)arg1 ;
-(NSArray *)pinyinSyllableCandidates;
-(void)setPinyinSyllableCandidates:(NSArray *)arg1 ;
-(unsigned long long)selectedPinyinSyllableCandidateIndex;
-(void)setSelectedPinyinSyllableCandidateIndex:(unsigned long long)arg1 ;
-(BOOL)filterCandidatesUsingInputIndex;
-(void)setFilterCandidatesUsingInputIndex:(BOOL)arg1 ;
-(TIKeyboardCandidateResultSet *)mostRecentCandidateResultSetPendingDisplay;
-(void)setMostRecentCandidateResultSetPendingDisplay:(TIKeyboardCandidateResultSet *)arg1 ;
-(BOOL)shouldClearBeforeContinuousPath;
-(void)setShouldClearBeforeContinuousPath:(BOOL)arg1 ;
-(BOOL)skipSetMarkedTextDuringInput;
-(void)setSkipSetMarkedTextDuringInput:(BOOL)arg1 ;
@end
