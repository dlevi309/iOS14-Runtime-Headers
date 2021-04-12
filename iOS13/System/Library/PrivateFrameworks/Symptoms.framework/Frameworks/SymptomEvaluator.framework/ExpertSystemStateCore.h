/*
* Generated on Monday, March 1, 2021 at 2:33:22 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/Symptoms.framework/Frameworks/SymptomEvaluator.framework/SymptomEvaluator
*/


@class NSString, NSDictionary, StopWatch;

@interface ExpertSystemStateCore : NSObject {

	int _loopTokens;
	NSString* _label;
	unsigned long long _rank;
	NSDictionary* _entryPreds;
	StopWatch* _sojournTime;
	/*^block*/id _entryAction;
	/*^block*/id _loopEvaluation;
	/*^block*/id _exitAction;
	ExpertSystemStateCore* _previousState;

}

@property (readonly) NSString * label;                                 //@synthesize label=_label - In the implementation block
@property (readonly) unsigned long long rank;                          //@synthesize rank=_rank - In the implementation block
@property (readonly) NSDictionary * entryPreds;                        //@synthesize entryPreds=_entryPreds - In the implementation block
@property (readonly) StopWatch * sojournTime;                          //@synthesize sojournTime=_sojournTime - In the implementation block
@property (nonatomic,copy) id entryAction;                             //@synthesize entryAction=_entryAction - In the implementation block
@property (nonatomic,copy) id loopEvaluation;                          //@synthesize loopEvaluation=_loopEvaluation - In the implementation block
@property (nonatomic,copy) id exitAction;                              //@synthesize exitAction=_exitAction - In the implementation block
@property (assign) int loopTokens;                                     //@synthesize loopTokens=_loopTokens - In the implementation block
@property (retain) ExpertSystemStateCore * previousState;              //@synthesize previousState=_previousState - In the implementation block
-(NSString *)label;
-(unsigned long long)rank;
-(ExpertSystemStateCore *)previousState;
-(void)setPreviousState:(ExpertSystemStateCore *)arg1 ;
-(id)exitAction;
-(void)setExitAction:(id)arg1 ;
-(id)initStateWithLabel:(id)arg1 rank:(unsigned long long)arg2 entryPreds:(id)arg3 ;
-(StopWatch *)sojournTime;
-(void)setEntryAction:(id)arg1 ;
-(id)entryAction;
-(id)loopEvaluation;
-(void)setLoopEvaluation:(id)arg1 ;
-(int)loopTokens;
-(void)setLoopTokens:(int)arg1 ;
-(NSDictionary *)entryPreds;
@end
