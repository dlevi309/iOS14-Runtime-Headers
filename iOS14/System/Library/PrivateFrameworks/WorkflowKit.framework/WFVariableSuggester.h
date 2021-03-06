/*
* Generated on Thursday, January 14, 2021 at 2:26:40 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/WorkflowKit.framework/WorkflowKit
*/


@protocol WFVariableSuggesterDelegate, WFVariableProvider;
@class NSArray;

@interface WFVariableSuggester : NSObject {

	id<WFVariableSuggesterDelegate> _delegate;
	id<WFVariableProvider> _variableProvider;
	NSArray* _suggestedVariables;
	NSArray* _currentVariables;
	NSArray* _userDefinedVariableNames;
	NSArray* _outputActions;
	unsigned long long _maxSuggestionsCount;
	unsigned long long _minSuggestionsCount;

}

@property (nonatomic,retain) NSArray * suggestedVariables;                                 //@synthesize suggestedVariables=_suggestedVariables - In the implementation block
@property (assign,nonatomic,__weak) id<WFVariableSuggesterDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (assign,nonatomic,__weak) id<WFVariableProvider> variableProvider;               //@synthesize variableProvider=_variableProvider - In the implementation block
@property (nonatomic,copy) NSArray * currentVariables;                                     //@synthesize currentVariables=_currentVariables - In the implementation block
@property (nonatomic,copy) NSArray * userDefinedVariableNames;                             //@synthesize userDefinedVariableNames=_userDefinedVariableNames - In the implementation block
@property (nonatomic,copy) NSArray * outputActions;                                        //@synthesize outputActions=_outputActions - In the implementation block
@property (assign,nonatomic) unsigned long long maxSuggestionsCount;                       //@synthesize maxSuggestionsCount=_maxSuggestionsCount - In the implementation block
@property (assign,nonatomic) unsigned long long minSuggestionsCount;                       //@synthesize minSuggestionsCount=_minSuggestionsCount - In the implementation block
-(unsigned long long)maxSuggestionsCount;
-(id)init;
-(id<WFVariableSuggesterDelegate>)delegate;
-(void)setMaxSuggestionsCount:(unsigned long long)arg1 ;
-(void)setDelegate:(id<WFVariableSuggesterDelegate>)arg1 ;
-(id<WFVariableProvider>)variableProvider;
-(void)setSuggestedVariables:(NSArray *)arg1 ;
-(void)setCurrentVariables:(NSArray *)arg1 ;
-(void)setUserDefinedVariableNames:(NSArray *)arg1 ;
-(void)setOutputActions:(NSArray *)arg1 ;
-(void)setMinSuggestionsCount:(unsigned long long)arg1 ;
-(void)availableVariablesDidChange;
-(void)setVariableProvider:(id<WFVariableProvider>)arg1 ;
-(NSArray *)suggestedVariables;
-(NSArray *)currentVariables;
-(NSArray *)userDefinedVariableNames;
-(NSArray *)outputActions;
-(unsigned long long)minSuggestionsCount;
@end

