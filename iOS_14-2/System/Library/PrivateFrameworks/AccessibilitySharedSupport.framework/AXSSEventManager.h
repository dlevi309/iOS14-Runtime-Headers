/*
* Generated on Thursday, January 14, 2021 at 2:25:58 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/AccessibilitySharedSupport.framework/AccessibilitySharedSupport
*/


@protocol AXSSKeyFilterDelegate;
@class AXSSActionManager, AXSSKeyboardCommandMap, NSDictionary, AXSSKeyboardCommandInfo;

@interface AXSSEventManager : NSObject {

	BOOL _shouldSuppressCommands;
	BOOL _passthroughModeEnabled;
	BOOL __tabKeyPressed;
	BOOL __performedActionWhileTabComboPressed;
	AXSSActionManager* _actionManager;
	unsigned long long _searchType;
	AXSSKeyboardCommandMap* _commandMap;
	id<AXSSKeyFilterDelegate> _filterDelegate;
	NSDictionary* __commandInfos;
	double __lastTabPressTime;
	AXSSKeyboardCommandInfo* __lastDownAndUpCommandInfo;

}

@property (nonatomic,readonly) NSDictionary * _commandInfos;                                           //@synthesize _commandInfos=__commandInfos - In the implementation block
@property (assign,nonatomic) BOOL _tabKeyPressed;                                                      //@synthesize _tabKeyPressed=__tabKeyPressed - In the implementation block
@property (assign,nonatomic) BOOL _performedActionWhileTabComboPressed;                                //@synthesize _performedActionWhileTabComboPressed=__performedActionWhileTabComboPressed - In the implementation block
@property (assign,nonatomic) double _lastTabPressTime;                                                 //@synthesize _lastTabPressTime=__lastTabPressTime - In the implementation block
@property (nonatomic,retain) AXSSKeyboardCommandInfo * _lastDownAndUpCommandInfo;                      //@synthesize _lastDownAndUpCommandInfo=__lastDownAndUpCommandInfo - In the implementation block
@property (nonatomic,retain) AXSSActionManager * actionManager;                                        //@synthesize actionManager=_actionManager - In the implementation block
@property (assign,nonatomic) unsigned long long searchType;                                            //@synthesize searchType=_searchType - In the implementation block
@property (nonatomic,retain) AXSSKeyboardCommandMap * commandMap;                                      //@synthesize commandMap=_commandMap - In the implementation block
@property (assign,nonatomic,__weak) id<AXSSKeyFilterDelegate> filterDelegate;                          //@synthesize filterDelegate=_filterDelegate - In the implementation block
@property (assign,nonatomic) BOOL shouldSuppressCommands;                                              //@synthesize shouldSuppressCommands=_shouldSuppressCommands - In the implementation block
@property (assign,getter=isPassthroughModeEnabled,nonatomic) BOOL passthroughModeEnabled;              //@synthesize passthroughModeEnabled=_passthroughModeEnabled - In the implementation block
-(unsigned long long)searchType;
-(void)setActionManager:(AXSSActionManager *)arg1 ;
-(AXSSActionManager *)actionManager;
-(AXSSKeyboardCommandMap *)commandMap;
-(void)setCommandMap:(AXSSKeyboardCommandMap *)arg1 ;
-(id<AXSSKeyFilterDelegate>)filterDelegate;
-(void)setFilterDelegate:(id<AXSSKeyFilterDelegate>)arg1 ;
-(BOOL)_tabKeyPressed;
-(id)initWithActionManager:(id)arg1 ;
-(void)setSearchType:(unsigned long long)arg1 ;
-(BOOL)processKeyboardEvent:(id)arg1 ;
-(id)initWithActionManager:(id)arg1 commandMap:(id)arg2 ;
-(BOOL)shouldCaptureEvent:(id)arg1 ;
-(void)handleFKAEvent:(id)arg1 ;
-(BOOL)shouldSuppressCommands;
-(void)set_lastDownAndUpCommandInfo:(AXSSKeyboardCommandInfo *)arg1 ;
-(AXSSKeyboardCommandInfo *)_lastDownAndUpCommandInfo;
-(BOOL)isPassthroughModeEnabled;
-(void)_handleTabEvent:(id)arg1 ;
-(void)_handleTabComboEvent:(id)arg1 ;
-(BOOL)_handleCommand:(id)arg1 event:(id)arg2 ;
-(BOOL)_handleEvent:(id)arg1 forCaptureOnly:(BOOL)arg2 ;
-(NSDictionary *)_commandInfos;
-(void)set_lastTabPressTime:(double)arg1 ;
-(void)set_tabKeyPressed:(BOOL)arg1 ;
-(BOOL)_performedActionWhileTabComboPressed;
-(double)_lastTabPressTime;
-(void)_handleTabRepeatOrUpWithCommand:(id)arg1 ;
-(void)set_performedActionWhileTabComboPressed:(BOOL)arg1 ;
-(id)_tabbedKeyChordForKeyChord:(id)arg1 ;
-(void)_performDownActionForCommand:(id)arg1 info:(id)arg2 ;
-(void)setShouldSuppressCommands:(BOOL)arg1 ;
-(void)setPassthroughModeEnabled:(BOOL)arg1 ;
@end
