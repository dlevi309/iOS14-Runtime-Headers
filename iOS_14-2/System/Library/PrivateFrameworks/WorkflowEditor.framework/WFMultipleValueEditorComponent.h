/*
* Generated on Thursday, January 14, 2021 at 2:28:49 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/WorkflowEditor.framework/WorkflowEditor
*/

#import <WorkflowEditor/WorkflowEditor-Structs.h>
#import <WorkflowEditor/CKStatefulViewComponent.h>

@protocol WFVariableProvider, WFVariableUIDelegate, WFComponentNavigationContext;
@class WFParameter, WFMultipleValueParameterState, NSSet, NSString, MTVisualStylingProvider, UIColor;

@interface WFMultipleValueEditorComponent : CKStatefulViewComponent {

	BOOL _standaloneVariablesAsContentItems;
	BOOL _variablesDisabled;
	BOOL _editable;
	WFParameter* _parameter;
	WFMultipleValueParameterState* _state;
	id<WFVariableProvider> _variableProvider;
	id<WFVariableUIDelegate> _variableUIDelegate;
	id<WFComponentNavigationContext> _navigationContext;
	NSSet* _allowedVariableTypes;
	NSString* _widgetSizeClass;
	long long _maximumItemsNumber;
	/*^block*/id _updateBlock;
	MTVisualStylingProvider* _fillProvider;
	UIColor* _overridingBackgroundColor;
	double _additionalBottomMargin;
	CKTypedComponentAction<WFListEditorDeletionConfirmation *> _confirmationAction;

}

@property (nonatomic,readonly) WFParameter * parameter;                                                                    //@synthesize parameter=_parameter - In the implementation block
@property (nonatomic,readonly) WFMultipleValueParameterState * state;                                                      //@synthesize state=_state - In the implementation block
@property (nonatomic,__weak,readonly) id<WFVariableProvider> variableProvider;                                             //@synthesize variableProvider=_variableProvider - In the implementation block
@property (nonatomic,__weak,readonly) id<WFVariableUIDelegate> variableUIDelegate;                                         //@synthesize variableUIDelegate=_variableUIDelegate - In the implementation block
@property (nonatomic,__weak,readonly) id<WFComponentNavigationContext> navigationContext;                                  //@synthesize navigationContext=_navigationContext - In the implementation block
@property (nonatomic,copy,readonly) NSSet * allowedVariableTypes;                                                          //@synthesize allowedVariableTypes=_allowedVariableTypes - In the implementation block
@property (nonatomic,readonly) BOOL standaloneVariablesAsContentItems;                                                     //@synthesize standaloneVariablesAsContentItems=_standaloneVariablesAsContentItems - In the implementation block
@property (nonatomic,readonly) BOOL variablesDisabled;                                                                     //@synthesize variablesDisabled=_variablesDisabled - In the implementation block
@property (nonatomic,readonly) BOOL editable;                                                                              //@synthesize editable=_editable - In the implementation block
@property (nonatomic,copy,readonly) NSString * widgetSizeClass;                                                            //@synthesize widgetSizeClass=_widgetSizeClass - In the implementation block
@property (nonatomic,readonly) long long maximumItemsNumber;                                                               //@synthesize maximumItemsNumber=_maximumItemsNumber - In the implementation block
@property (nonatomic,readonly) id updateBlock;                                                                             //@synthesize updateBlock=_updateBlock - In the implementation block
@property (nonatomic,readonly) CKTypedComponentAction<WFListEditorDeletionConfirmation *> confirmationAction;              //@synthesize confirmationAction=_confirmationAction - In the implementation block
@property (nonatomic,readonly) MTVisualStylingProvider * fillProvider;                                                     //@synthesize fillProvider=_fillProvider - In the implementation block
@property (nonatomic,readonly) UIColor * overridingBackgroundColor;                                                        //@synthesize overridingBackgroundColor=_overridingBackgroundColor - In the implementation block
@property (nonatomic,readonly) double additionalBottomMargin;                                                              //@synthesize additionalBottomMargin=_additionalBottomMargin - In the implementation block
+(id)newWithParameter:(id)arg1 state:(id)arg2 editable:(BOOL)arg3 widgetSizeClass:(id)arg4 variableProvider:(id)arg5 variableUIDelegate:(id)arg6 navigationContext:(id)arg7 variablesDisabled:(BOOL)arg8 allowedVariableTypes:(id)arg9 standaloneVariablesAsContentItems:(BOOL)arg10 updateBlock:(/*^block*/id)arg11 confirmationAction:(CKTypedComponentAction<WFListEditorDeletionConfirmation *>)arg12 additionalBottomMargin:(double)arg13 fillProvider:(id)arg14 overridingBackgroundColor:(id)arg15 size:(const CKComponentSize*)arg16 ;
-(BOOL)editable;
-(WFParameter *)parameter;
-(WFMultipleValueParameterState *)state;
-(id)updateBlock;
-(CKTypedComponentAction<WFListEditorDeletionConfirmation *>)confirmationAction;
-(NSString *)widgetSizeClass;
-(id<WFVariableProvider>)variableProvider;
-(BOOL)variablesDisabled;
-(CKComponentLayout*)computeLayoutThatFits:(CKSizeRange)arg1 ;
-(id<WFComponentNavigationContext>)navigationContext;
-(id<WFVariableUIDelegate>)variableUIDelegate;
-(NSSet *)allowedVariableTypes;
-(BOOL)standaloneVariablesAsContentItems;
-(UIColor *)overridingBackgroundColor;
-(MTVisualStylingProvider *)fillProvider;
-(long long)maximumItemsNumber;
-(double)additionalBottomMargin;
@end
