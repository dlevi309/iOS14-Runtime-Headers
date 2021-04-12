/*
* Generated on Monday, March 1, 2021 at 2:34:17 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/TextInputCore.framework/TextInputCore
*/

#import <TextInputCore/TIUserAction.h>

@class NSString, TIKeyboardInput, NSMutableArray, TIKeyboardCandidate, TICursorEvent, NSArray;

@interface TIWordEntry : TIUserAction {

	BOOL _includesCursorEdits;
	BOOL _includesOrientationChange;
	BOOL _isRetrocorrection;
	BOOL _isMultilingual;
	BOOL _isOOV;
	BOOL _isContinuousPathCompletion;
	BOOL _isPunctuationEntryFollowingAWord;
	int _wordEntryType;
	int _wordAlignmentConf;
	int _touchAlignmentConf;
	NSString* _acceptedString;
	NSString* _originalAcceptedString;
	NSString* _orientation;
	TIKeyboardInput* _inputTriggeredTextAccepted;
	long long _layoutID;
	NSMutableArray* _allKeyboardInputsM;
	NSMutableArray* _allTouchesM;
	NSMutableArray* _candidatesOfferedM;
	NSMutableArray* _touchLayoutsM;
	TIKeyboardCandidate* _acceptedCandidate;
	TIKeyboardCandidate* _originalCandidate;
	NSString* _inputStem;
	NSString* _inputContext;
	TIWordEntry* _editedEntry;
	TICursorEvent* _editAction;
	NSMutableArray* _allEdits;
	unsigned long long _sessionIndex;
	unsigned long long _alignmentConflicts;
	long long _candidateIndex;

}

@property (nonatomic,retain) NSMutableArray * allKeyboardInputsM;                       //@synthesize allKeyboardInputsM=_allKeyboardInputsM - In the implementation block
@property (nonatomic,retain) NSMutableArray * allTouchesM;                              //@synthesize allTouchesM=_allTouchesM - In the implementation block
@property (nonatomic,retain) NSMutableArray * candidatesOfferedM;                       //@synthesize candidatesOfferedM=_candidatesOfferedM - In the implementation block
@property (nonatomic,retain) NSMutableArray * touchLayoutsM;                            //@synthesize touchLayoutsM=_touchLayoutsM - In the implementation block
@property (nonatomic,retain) TIKeyboardCandidate * acceptedCandidate;                   //@synthesize acceptedCandidate=_acceptedCandidate - In the implementation block
@property (nonatomic,retain) TIKeyboardCandidate * originalCandidate;                   //@synthesize originalCandidate=_originalCandidate - In the implementation block
@property (nonatomic,copy) NSString * inputStem;                                        //@synthesize inputStem=_inputStem - In the implementation block
@property (nonatomic,copy) NSString * inputContext;                                     //@synthesize inputContext=_inputContext - In the implementation block
@property (nonatomic,retain) TIWordEntry * editedEntry;                                 //@synthesize editedEntry=_editedEntry - In the implementation block
@property (nonatomic,retain) TICursorEvent * editAction;                                //@synthesize editAction=_editAction - In the implementation block
@property (nonatomic,retain) NSMutableArray * allEdits;                                 //@synthesize allEdits=_allEdits - In the implementation block
@property (assign,nonatomic) unsigned long long sessionIndex;                           //@synthesize sessionIndex=_sessionIndex - In the implementation block
@property (assign,nonatomic) unsigned long long alignmentConflicts;                     //@synthesize alignmentConflicts=_alignmentConflicts - In the implementation block
@property (assign) long long layoutID;                                                  //@synthesize layoutID=_layoutID - In the implementation block
@property (assign) long long candidateIndex;                                            //@synthesize candidateIndex=_candidateIndex - In the implementation block
@property (nonatomic,retain) TIKeyboardInput * inputTriggeredTextAccepted;              //@synthesize inputTriggeredTextAccepted=_inputTriggeredTextAccepted - In the implementation block
@property (assign,nonatomic) BOOL isPunctuationEntryFollowingAWord;                     //@synthesize isPunctuationEntryFollowingAWord=_isPunctuationEntryFollowingAWord - In the implementation block
@property (nonatomic,readonly) NSArray * allKeyboardInputs; 
@property (nonatomic,readonly) NSArray * allTouches; 
@property (nonatomic,readonly) NSArray * candidatesOffered; 
@property (nonatomic,readonly) NSArray * touchLayouts; 
@property (nonatomic,copy) NSString * acceptedString;                                   //@synthesize acceptedString=_acceptedString - In the implementation block
@property (nonatomic,copy) NSString * originalAcceptedString;                           //@synthesize originalAcceptedString=_originalAcceptedString - In the implementation block
@property (nonatomic,copy) NSString * orientation;                                      //@synthesize orientation=_orientation - In the implementation block
@property (assign,nonatomic) int wordEntryType;                                         //@synthesize wordEntryType=_wordEntryType - In the implementation block
@property (assign,nonatomic) BOOL includesCursorEdits;                                  //@synthesize includesCursorEdits=_includesCursorEdits - In the implementation block
@property (assign,nonatomic) BOOL includesOrientationChange;                            //@synthesize includesOrientationChange=_includesOrientationChange - In the implementation block
@property (assign,nonatomic) BOOL isRetrocorrection;                                    //@synthesize isRetrocorrection=_isRetrocorrection - In the implementation block
@property (assign,nonatomic) BOOL isMultilingual;                                       //@synthesize isMultilingual=_isMultilingual - In the implementation block
@property (assign,nonatomic) BOOL isOOV;                                                //@synthesize isOOV=_isOOV - In the implementation block
@property (assign,nonatomic) BOOL isContinuousPathCompletion;                           //@synthesize isContinuousPathCompletion=_isContinuousPathCompletion - In the implementation block
@property (assign,nonatomic) int wordAlignmentConf;                                     //@synthesize wordAlignmentConf=_wordAlignmentConf - In the implementation block
@property (assign,nonatomic) int touchAlignmentConf;                                    //@synthesize touchAlignmentConf=_touchAlignmentConf - In the implementation block
+(BOOL)supportsSecureCoding;
-(id)init;
-(id)description;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(NSString *)orientation;
-(void)setOrientation:(NSString *)arg1 ;
-(NSArray *)allTouches;
-(TIKeyboardCandidate *)acceptedCandidate;
-(void)setAcceptedCandidate:(TIKeyboardCandidate *)arg1 ;
-(id)documentContextBeforeInput;
-(void)setEditAction:(TICursorEvent *)arg1 ;
-(TICursorEvent *)editAction;
-(long long)candidateIndex;
-(void)setCandidateIndex:(long long)arg1 ;
-(NSString *)inputContext;
-(NSString *)inputStem;
-(NSMutableArray *)allEdits;
-(id)descriptionWithContext;
-(void)addKeyInput:(id)arg1 ;
-(void)addCandidateOffered:(id)arg1 ;
-(void)addTouchEvent:(id)arg1 withLayoutId:(unsigned long long)arg2 ;
-(NSArray *)allKeyboardInputs;
-(NSArray *)candidatesOffered;
-(NSArray *)touchLayouts;
-(BOOL)isEntryFollowingANewLine;
-(NSString *)acceptedString;
-(void)setAcceptedString:(NSString *)arg1 ;
-(NSString *)originalAcceptedString;
-(void)setOriginalAcceptedString:(NSString *)arg1 ;
-(int)wordEntryType;
-(void)setWordEntryType:(int)arg1 ;
-(BOOL)includesCursorEdits;
-(void)setIncludesCursorEdits:(BOOL)arg1 ;
-(BOOL)includesOrientationChange;
-(void)setIncludesOrientationChange:(BOOL)arg1 ;
-(BOOL)isRetrocorrection;
-(void)setIsRetrocorrection:(BOOL)arg1 ;
-(BOOL)isMultilingual;
-(void)setIsMultilingual:(BOOL)arg1 ;
-(BOOL)isOOV;
-(void)setIsOOV:(BOOL)arg1 ;
-(BOOL)isContinuousPathCompletion;
-(void)setIsContinuousPathCompletion:(BOOL)arg1 ;
-(TIKeyboardInput *)inputTriggeredTextAccepted;
-(void)setInputTriggeredTextAccepted:(TIKeyboardInput *)arg1 ;
-(int)wordAlignmentConf;
-(void)setWordAlignmentConf:(int)arg1 ;
-(int)touchAlignmentConf;
-(void)setTouchAlignmentConf:(int)arg1 ;
-(long long)layoutID;
-(void)setLayoutID:(long long)arg1 ;
-(NSMutableArray *)allKeyboardInputsM;
-(void)setAllKeyboardInputsM:(NSMutableArray *)arg1 ;
-(NSMutableArray *)allTouchesM;
-(void)setAllTouchesM:(NSMutableArray *)arg1 ;
-(NSMutableArray *)candidatesOfferedM;
-(void)setCandidatesOfferedM:(NSMutableArray *)arg1 ;
-(NSMutableArray *)touchLayoutsM;
-(void)setTouchLayoutsM:(NSMutableArray *)arg1 ;
-(TIKeyboardCandidate *)originalCandidate;
-(void)setOriginalCandidate:(TIKeyboardCandidate *)arg1 ;
-(void)setInputStem:(NSString *)arg1 ;
-(void)setInputContext:(NSString *)arg1 ;
-(TIWordEntry *)editedEntry;
-(void)setEditedEntry:(TIWordEntry *)arg1 ;
-(void)setAllEdits:(NSMutableArray *)arg1 ;
-(unsigned long long)sessionIndex;
-(void)setSessionIndex:(unsigned long long)arg1 ;
-(unsigned long long)alignmentConflicts;
-(void)setAlignmentConflicts:(unsigned long long)arg1 ;
-(BOOL)isPunctuationEntryFollowingAWord;
-(void)setIsPunctuationEntryFollowingAWord:(BOOL)arg1 ;
@end
