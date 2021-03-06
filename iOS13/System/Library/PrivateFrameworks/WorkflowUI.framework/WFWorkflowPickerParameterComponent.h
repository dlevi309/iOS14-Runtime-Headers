/*
* Generated on Monday, March 1, 2021 at 2:34:22 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/WorkflowUI.framework/WorkflowUI
*/

#import <WorkflowUI/WorkflowUI-Structs.h>
#import <WorkflowUI/WFParameterComponent.h>

@protocol WFComponentNavigationContext, WFVariableProvider;
@class WFParameter, WFVariableSubstitutableParameterState;

@interface WFWorkflowPickerParameterComponent : WFParameterComponent {

	BOOL _processing;
	WFParameter* _parameter;
	/*^block*/id _updateBlock;
	WFVariableSubstitutableParameterState* _state;
	id<WFComponentNavigationContext> _navigationContext;
	id<WFVariableProvider> _variableProvider;

}

@property (nonatomic,readonly) WFVariableSubstitutableParameterState * state;                          //@synthesize state=_state - In the implementation block
@property (nonatomic,__weak,readonly) id<WFComponentNavigationContext> navigationContext;              //@synthesize navigationContext=_navigationContext - In the implementation block
@property (nonatomic,readonly) id<WFVariableProvider> variableProvider;                                //@synthesize variableProvider=_variableProvider - In the implementation block
@property (assign,nonatomic) BOOL processing;                                                          //@synthesize processing=_processing - In the implementation block
+(id)newWithParameter:(id)arg1 state:(id)arg2 updateBlock:(/*^block*/id)arg3 options:(WFParameterComponentOptions)arg4 variableProvider:(id)arg5 variableUIDelegate:(id)arg6 navigationContext:(id)arg7 labelsToAlignTo:(id)arg8 ;
-(WFVariableSubstitutableParameterState *)state;
-(/*^block*/id)updateBlock;
-(id)parameter;
-(void)setProcessing:(BOOL)arg1 ;
-(id<WFVariableProvider>)variableProvider;
-(id<WFComponentNavigationContext>)navigationContext;
-(BOOL)processing;
@end

