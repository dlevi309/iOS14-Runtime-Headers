/*
* Generated on Thursday, January 14, 2021 at 2:24:35 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/PencilKit.framework/PencilKit
*/


@class NSString, NSArray;

@interface PKTextInputSettings : NSObject {

	BOOL _preventLeftoverCharsInSubwordGestures;
	BOOL _activePreviewEnabled;
	BOOL _styledActivePreview;
	BOOL _floatingBackgroundEnabled;
	BOOL _continuousRecognition;
	BOOL _outOfProcessRecognition;
	BOOL _enableInAllApps;
	BOOL _enableOnRemoteViews;
	BOOL _enableViewControllerSupport;
	BOOL _enableReserveSpace;
	BOOL _enableReserveSpaceTapForNewlines;
	BOOL _UCBPaletteEnabled;
	BOOL _alwaysIncludeReturnKeyAndInputAssistantItems;
	BOOL _hideDefaultReturnKeyWhenSpecialReturnKeyIsPresent;
	BOOL _chineseSupportEnabled;
	BOOL _lineBreakVerticalBarGestureEnabled;
	BOOL _lineBreakVerticalBarUpToDelete;
	BOOL _autoLineBreakEnabled;
	BOOL _autoLineBreakRequireWeakCursor;
	BOOL _enableWeakCursor;
	BOOL _scratchOutMakesTheCursorStrong;
	BOOL _enableTargetedAppWorkarounds;
	BOOL _useLargeHitTestArea;
	BOOL _useSlidingCanvas;
	BOOL _slidingCanvasDebugBorder;
	BOOL _useSingleComponentCanvas;
	BOOL _alwaysAllowInSpringBoard;
	BOOL _useTransformStrokesAnimation;
	BOOL _forceUserTextInputSettingEnabled;
	double _textInputViewHitTestSlackHorizontal;
	double _textInputViewHitTestSlackVertical;
	double _firstResponderAttractionHorizontal;
	double _firstResponderAttractionVertical;
	double _subwordGestureEndingSpeedRange;
	double _subwordGestureSpeedThreshold;
	double _minimumWritingSpaceWidth;
	double _interactionDisablingDelay;
	double _textInputStrokeFadeOutDelay;
	double _textInputStrokeFadeOutDuration;
	double _textInputStandardCommitDelay;
	double _singleCharacterCommitDelay;
	long long _incrementalCommitWordsBack;
	double _continuousRecognitionWritingInterval;
	double _recognitionCoalescingDelay;
	NSString* _recognitionLocaleIdentifier;
	double _debugRecognitionRequestArtificialDelay;
	double _debugElementFinderArtificialDelay;
	double _debugFirstResponderArtificialDelay;
	double _drawingGestureMinimumPanDistanceThreshold;
	double _drawingGestureMinimumScrollDistanceThreshold;
	double _drawingGestureTapDetectionDistanceThreshold;
	double _drawingGestureTapDetectionTimeInterval;
	double _drawingGestureDetectTapAwayFromCurrentStrokesHorizontalDistance;
	double _drawingGestureDetectTapAwayFromCurrentStrokesVerticalDistance;
	double _drawingGestureLongPressMaxDistance;
	double _drawingGestureLongPressDetectionTimeInterval;
	double _asyncElementRequestTimeout;
	double _inkWeight;
	double _inkWeightForIncreasedContrast;
	double _autoLineBreakVerticalDistance;
	double _autoLineBreakDualVerticalDistance;
	double _autoLineBreakAreaWidthFactor;
	double _weakCursorVisibilityTimeout;
	double _strongCursorRestoreDelay;
	double _strongCursorMaximumYDistance;
	double _slidingCanvasWidth;
	double _slidingCanvasHeight;
	NSArray* __inputModesForTesting;

}

@property (nonatomic,retain) NSArray * _inputModesForTesting;                                                     //@synthesize _inputModesForTesting=__inputModesForTesting - In the implementation block
@property (assign,nonatomic) double textInputViewHitTestSlackHorizontal;                                          //@synthesize textInputViewHitTestSlackHorizontal=_textInputViewHitTestSlackHorizontal - In the implementation block
@property (assign,nonatomic) double textInputViewHitTestSlackVertical;                                            //@synthesize textInputViewHitTestSlackVertical=_textInputViewHitTestSlackVertical - In the implementation block
@property (assign,nonatomic) double firstResponderAttractionHorizontal;                                           //@synthesize firstResponderAttractionHorizontal=_firstResponderAttractionHorizontal - In the implementation block
@property (assign,nonatomic) double firstResponderAttractionVertical;                                             //@synthesize firstResponderAttractionVertical=_firstResponderAttractionVertical - In the implementation block
@property (assign,nonatomic) double subwordGestureEndingSpeedRange;                                               //@synthesize subwordGestureEndingSpeedRange=_subwordGestureEndingSpeedRange - In the implementation block
@property (assign,nonatomic) double subwordGestureSpeedThreshold;                                                 //@synthesize subwordGestureSpeedThreshold=_subwordGestureSpeedThreshold - In the implementation block
@property (assign,nonatomic) BOOL preventLeftoverCharsInSubwordGestures;                                          //@synthesize preventLeftoverCharsInSubwordGestures=_preventLeftoverCharsInSubwordGestures - In the implementation block
@property (assign,nonatomic) double minimumWritingSpaceWidth;                                                     //@synthesize minimumWritingSpaceWidth=_minimumWritingSpaceWidth - In the implementation block
@property (assign,nonatomic) double interactionDisablingDelay;                                                    //@synthesize interactionDisablingDelay=_interactionDisablingDelay - In the implementation block
@property (assign,nonatomic) double textInputStrokeFadeOutDelay;                                                  //@synthesize textInputStrokeFadeOutDelay=_textInputStrokeFadeOutDelay - In the implementation block
@property (assign,nonatomic) double textInputStrokeFadeOutDuration;                                               //@synthesize textInputStrokeFadeOutDuration=_textInputStrokeFadeOutDuration - In the implementation block
@property (assign,nonatomic) BOOL activePreviewEnabled;                                                           //@synthesize activePreviewEnabled=_activePreviewEnabled - In the implementation block
@property (assign,nonatomic) BOOL styledActivePreview;                                                            //@synthesize styledActivePreview=_styledActivePreview - In the implementation block
@property (assign,nonatomic) BOOL floatingBackgroundEnabled;                                                      //@synthesize floatingBackgroundEnabled=_floatingBackgroundEnabled - In the implementation block
@property (assign,nonatomic) double textInputStandardCommitDelay;                                                 //@synthesize textInputStandardCommitDelay=_textInputStandardCommitDelay - In the implementation block
@property (assign,nonatomic) double singleCharacterCommitDelay;                                                   //@synthesize singleCharacterCommitDelay=_singleCharacterCommitDelay - In the implementation block
@property (assign,nonatomic) long long incrementalCommitWordsBack;                                                //@synthesize incrementalCommitWordsBack=_incrementalCommitWordsBack - In the implementation block
@property (assign,nonatomic) BOOL continuousRecognition;                                                          //@synthesize continuousRecognition=_continuousRecognition - In the implementation block
@property (assign,nonatomic) double continuousRecognitionWritingInterval;                                         //@synthesize continuousRecognitionWritingInterval=_continuousRecognitionWritingInterval - In the implementation block
@property (assign,nonatomic) double recognitionCoalescingDelay;                                                   //@synthesize recognitionCoalescingDelay=_recognitionCoalescingDelay - In the implementation block
@property (nonatomic,copy) NSString * recognitionLocaleIdentifier;                                                //@synthesize recognitionLocaleIdentifier=_recognitionLocaleIdentifier - In the implementation block
@property (assign,nonatomic) BOOL outOfProcessRecognition;                                                        //@synthesize outOfProcessRecognition=_outOfProcessRecognition - In the implementation block
@property (assign,nonatomic) double debugRecognitionRequestArtificialDelay;                                       //@synthesize debugRecognitionRequestArtificialDelay=_debugRecognitionRequestArtificialDelay - In the implementation block
@property (assign,nonatomic) double debugElementFinderArtificialDelay;                                            //@synthesize debugElementFinderArtificialDelay=_debugElementFinderArtificialDelay - In the implementation block
@property (assign,nonatomic) double debugFirstResponderArtificialDelay;                                           //@synthesize debugFirstResponderArtificialDelay=_debugFirstResponderArtificialDelay - In the implementation block
@property (assign,nonatomic) BOOL enableInAllApps;                                                                //@synthesize enableInAllApps=_enableInAllApps - In the implementation block
@property (assign,nonatomic) BOOL enableOnRemoteViews;                                                            //@synthesize enableOnRemoteViews=_enableOnRemoteViews - In the implementation block
@property (assign,nonatomic) BOOL enableViewControllerSupport;                                                    //@synthesize enableViewControllerSupport=_enableViewControllerSupport - In the implementation block
@property (assign,nonatomic) BOOL enableReserveSpace;                                                             //@synthesize enableReserveSpace=_enableReserveSpace - In the implementation block
@property (assign,nonatomic) BOOL enableReserveSpaceTapForNewlines;                                               //@synthesize enableReserveSpaceTapForNewlines=_enableReserveSpaceTapForNewlines - In the implementation block
@property (assign,nonatomic) BOOL UCBPaletteEnabled;                                                              //@synthesize UCBPaletteEnabled=_UCBPaletteEnabled - In the implementation block
@property (assign,nonatomic) BOOL alwaysIncludeReturnKeyAndInputAssistantItems;                                   //@synthesize alwaysIncludeReturnKeyAndInputAssistantItems=_alwaysIncludeReturnKeyAndInputAssistantItems - In the implementation block
@property (assign,nonatomic) BOOL hideDefaultReturnKeyWhenSpecialReturnKeyIsPresent;                              //@synthesize hideDefaultReturnKeyWhenSpecialReturnKeyIsPresent=_hideDefaultReturnKeyWhenSpecialReturnKeyIsPresent - In the implementation block
@property (assign,nonatomic) BOOL chineseSupportEnabled;                                                          //@synthesize chineseSupportEnabled=_chineseSupportEnabled - In the implementation block
@property (assign,nonatomic) double drawingGestureMinimumPanDistanceThreshold;                                    //@synthesize drawingGestureMinimumPanDistanceThreshold=_drawingGestureMinimumPanDistanceThreshold - In the implementation block
@property (assign,nonatomic) double drawingGestureMinimumScrollDistanceThreshold;                                 //@synthesize drawingGestureMinimumScrollDistanceThreshold=_drawingGestureMinimumScrollDistanceThreshold - In the implementation block
@property (assign,nonatomic) double drawingGestureTapDetectionDistanceThreshold;                                  //@synthesize drawingGestureTapDetectionDistanceThreshold=_drawingGestureTapDetectionDistanceThreshold - In the implementation block
@property (assign,nonatomic) double drawingGestureTapDetectionTimeInterval;                                       //@synthesize drawingGestureTapDetectionTimeInterval=_drawingGestureTapDetectionTimeInterval - In the implementation block
@property (assign,nonatomic) double drawingGestureDetectTapAwayFromCurrentStrokesHorizontalDistance;              //@synthesize drawingGestureDetectTapAwayFromCurrentStrokesHorizontalDistance=_drawingGestureDetectTapAwayFromCurrentStrokesHorizontalDistance - In the implementation block
@property (assign,nonatomic) double drawingGestureDetectTapAwayFromCurrentStrokesVerticalDistance;                //@synthesize drawingGestureDetectTapAwayFromCurrentStrokesVerticalDistance=_drawingGestureDetectTapAwayFromCurrentStrokesVerticalDistance - In the implementation block
@property (assign,nonatomic) double drawingGestureLongPressMaxDistance;                                           //@synthesize drawingGestureLongPressMaxDistance=_drawingGestureLongPressMaxDistance - In the implementation block
@property (assign,nonatomic) double drawingGestureLongPressDetectionTimeInterval;                                 //@synthesize drawingGestureLongPressDetectionTimeInterval=_drawingGestureLongPressDetectionTimeInterval - In the implementation block
@property (assign,nonatomic) double asyncElementRequestTimeout;                                                   //@synthesize asyncElementRequestTimeout=_asyncElementRequestTimeout - In the implementation block
@property (assign,nonatomic) double inkWeight;                                                                    //@synthesize inkWeight=_inkWeight - In the implementation block
@property (assign,nonatomic) double inkWeightForIncreasedContrast;                                                //@synthesize inkWeightForIncreasedContrast=_inkWeightForIncreasedContrast - In the implementation block
@property (assign,nonatomic) BOOL lineBreakVerticalBarGestureEnabled;                                             //@synthesize lineBreakVerticalBarGestureEnabled=_lineBreakVerticalBarGestureEnabled - In the implementation block
@property (assign,nonatomic) BOOL lineBreakVerticalBarUpToDelete;                                                 //@synthesize lineBreakVerticalBarUpToDelete=_lineBreakVerticalBarUpToDelete - In the implementation block
@property (assign,nonatomic) BOOL autoLineBreakEnabled;                                                           //@synthesize autoLineBreakEnabled=_autoLineBreakEnabled - In the implementation block
@property (assign,nonatomic) BOOL autoLineBreakRequireWeakCursor;                                                 //@synthesize autoLineBreakRequireWeakCursor=_autoLineBreakRequireWeakCursor - In the implementation block
@property (assign,nonatomic) double autoLineBreakVerticalDistance;                                                //@synthesize autoLineBreakVerticalDistance=_autoLineBreakVerticalDistance - In the implementation block
@property (assign,nonatomic) double autoLineBreakDualVerticalDistance;                                            //@synthesize autoLineBreakDualVerticalDistance=_autoLineBreakDualVerticalDistance - In the implementation block
@property (assign,nonatomic) double autoLineBreakAreaWidthFactor;                                                 //@synthesize autoLineBreakAreaWidthFactor=_autoLineBreakAreaWidthFactor - In the implementation block
@property (assign,nonatomic) BOOL enableWeakCursor;                                                               //@synthesize enableWeakCursor=_enableWeakCursor - In the implementation block
@property (assign,nonatomic) double weakCursorVisibilityTimeout;                                                  //@synthesize weakCursorVisibilityTimeout=_weakCursorVisibilityTimeout - In the implementation block
@property (assign,nonatomic) double strongCursorRestoreDelay;                                                     //@synthesize strongCursorRestoreDelay=_strongCursorRestoreDelay - In the implementation block
@property (assign,nonatomic) BOOL scratchOutMakesTheCursorStrong;                                                 //@synthesize scratchOutMakesTheCursorStrong=_scratchOutMakesTheCursorStrong - In the implementation block
@property (assign,nonatomic) BOOL enableTargetedAppWorkarounds;                                                   //@synthesize enableTargetedAppWorkarounds=_enableTargetedAppWorkarounds - In the implementation block
@property (assign,nonatomic) BOOL useLargeHitTestArea;                                                            //@synthesize useLargeHitTestArea=_useLargeHitTestArea - In the implementation block
@property (assign,nonatomic) double strongCursorMaximumYDistance;                                                 //@synthesize strongCursorMaximumYDistance=_strongCursorMaximumYDistance - In the implementation block
@property (assign,nonatomic) BOOL useSlidingCanvas;                                                               //@synthesize useSlidingCanvas=_useSlidingCanvas - In the implementation block
@property (assign,nonatomic) BOOL slidingCanvasDebugBorder;                                                       //@synthesize slidingCanvasDebugBorder=_slidingCanvasDebugBorder - In the implementation block
@property (assign,nonatomic) double slidingCanvasWidth;                                                           //@synthesize slidingCanvasWidth=_slidingCanvasWidth - In the implementation block
@property (assign,nonatomic) double slidingCanvasHeight;                                                          //@synthesize slidingCanvasHeight=_slidingCanvasHeight - In the implementation block
@property (assign,nonatomic) BOOL useSingleComponentCanvas;                                                       //@synthesize useSingleComponentCanvas=_useSingleComponentCanvas - In the implementation block
@property (nonatomic,readonly) BOOL supportedKeyboardLocaleExists; 
@property (assign,nonatomic) BOOL alwaysAllowInSpringBoard;                                                       //@synthesize alwaysAllowInSpringBoard=_alwaysAllowInSpringBoard - In the implementation block
@property (assign,nonatomic) BOOL useTransformStrokesAnimation;                                                   //@synthesize useTransformStrokesAnimation=_useTransformStrokesAnimation - In the implementation block
@property (assign,nonatomic) BOOL forceUserTextInputSettingEnabled;                                               //@synthesize forceUserTextInputSettingEnabled=_forceUserTextInputSettingEnabled - In the implementation block
+(id)sharedSettings;
+(long long)featureLevel;
-(void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4 ;
-(id)init;
-(void)setValue:(id)arg1 forKey:(id)arg2 ;
-(NSString *)recognitionLocaleIdentifier;
-(void)_loadDefaultValues;
-(void)dealloc;
-(long long)incrementalCommitWordsBack;
-(double)textInputStrokeFadeOutDuration;
-(double)textInputStandardCommitDelay;
-(double)singleCharacterCommitDelay;
-(void)loadSettingsFromUserDefaults;
-(BOOL)_shouldSaveSettings;
-(void)_scheduleSavingSettingsSoon;
-(BOOL)enableInAllApps;
-(double)interactionDisablingDelay;
-(double)textInputStrokeFadeOutDelay;
-(double)continuousRecognitionWritingInterval;
-(BOOL)continuousRecognition;
-(double)recognitionCoalescingDelay;
-(BOOL)outOfProcessRecognition;
-(double)textInputViewHitTestSlackHorizontal;
-(double)textInputViewHitTestSlackVertical;
-(double)firstResponderAttractionHorizontal;
-(double)firstResponderAttractionVertical;
-(double)minimumWritingSpaceWidth;
-(double)subwordGestureEndingSpeedRange;
-(double)subwordGestureSpeedThreshold;
-(BOOL)preventLeftoverCharsInSubwordGestures;
-(BOOL)activePreviewEnabled;
-(BOOL)styledActivePreview;
-(BOOL)floatingBackgroundEnabled;
-(double)debugRecognitionRequestArtificialDelay;
-(double)debugElementFinderArtificialDelay;
-(double)debugFirstResponderArtificialDelay;
-(BOOL)enableOnRemoteViews;
-(BOOL)enableViewControllerSupport;
-(BOOL)UCBPaletteEnabled;
-(BOOL)alwaysIncludeReturnKeyAndInputAssistantItems;
-(BOOL)hideDefaultReturnKeyWhenSpecialReturnKeyIsPresent;
-(BOOL)enableReserveSpace;
-(BOOL)enableReserveSpaceTapForNewlines;
-(double)asyncElementRequestTimeout;
-(double)drawingGestureMinimumPanDistanceThreshold;
-(double)drawingGestureMinimumScrollDistanceThreshold;
-(double)drawingGestureTapDetectionTimeInterval;
-(double)drawingGestureTapDetectionDistanceThreshold;
-(double)drawingGestureDetectTapAwayFromCurrentStrokesHorizontalDistance;
-(double)drawingGestureDetectTapAwayFromCurrentStrokesVerticalDistance;
-(double)drawingGestureLongPressMaxDistance;
-(double)drawingGestureLongPressDetectionTimeInterval;
-(double)inkWeight;
-(double)inkWeightForIncreasedContrast;
-(BOOL)lineBreakVerticalBarGestureEnabled;
-(BOOL)lineBreakVerticalBarUpToDelete;
-(BOOL)autoLineBreakEnabled;
-(BOOL)autoLineBreakRequireWeakCursor;
-(double)autoLineBreakVerticalDistance;
-(double)autoLineBreakDualVerticalDistance;
-(double)autoLineBreakAreaWidthFactor;
-(BOOL)enableWeakCursor;
-(double)weakCursorVisibilityTimeout;
-(double)strongCursorRestoreDelay;
-(BOOL)scratchOutMakesTheCursorStrong;
-(BOOL)enableTargetedAppWorkarounds;
-(BOOL)chineseSupportEnabled;
-(BOOL)useSlidingCanvas;
-(BOOL)slidingCanvasDebugBorder;
-(double)slidingCanvasWidth;
-(double)slidingCanvasHeight;
-(BOOL)useSingleComponentCanvas;
-(BOOL)useLargeHitTestArea;
-(double)strongCursorMaximumYDistance;
-(BOOL)alwaysAllowInSpringBoard;
-(BOOL)useTransformStrokesAnimation;
-(void)setTextInputViewHitTestSlackHorizontal:(double)arg1 ;
-(void)setTextInputViewHitTestSlackVertical:(double)arg1 ;
-(void)setFirstResponderAttractionHorizontal:(double)arg1 ;
-(void)setFirstResponderAttractionVertical:(double)arg1 ;
-(void)setMinimumWritingSpaceWidth:(double)arg1 ;
-(void)setSubwordGestureEndingSpeedRange:(double)arg1 ;
-(void)setSubwordGestureSpeedThreshold:(double)arg1 ;
-(void)setPreventLeftoverCharsInSubwordGestures:(BOOL)arg1 ;
-(void)setInteractionDisablingDelay:(double)arg1 ;
-(void)setTextInputStrokeFadeOutDelay:(double)arg1 ;
-(void)setTextInputStrokeFadeOutDuration:(double)arg1 ;
-(void)setContinuousRecognitionWritingInterval:(double)arg1 ;
-(void)setContinuousRecognition:(BOOL)arg1 ;
-(void)setRecognitionCoalescingDelay:(double)arg1 ;
-(void)setOutOfProcessRecognition:(BOOL)arg1 ;
-(void)setActivePreviewEnabled:(BOOL)arg1 ;
-(void)setStyledActivePreview:(BOOL)arg1 ;
-(void)setFloatingBackgroundEnabled:(BOOL)arg1 ;
-(void)setTextInputStandardCommitDelay:(double)arg1 ;
-(void)setSingleCharacterCommitDelay:(double)arg1 ;
-(void)setIncrementalCommitWordsBack:(long long)arg1 ;
-(void)setDebugRecognitionRequestArtificialDelay:(double)arg1 ;
-(void)setDebugElementFinderArtificialDelay:(double)arg1 ;
-(void)setDebugFirstResponderArtificialDelay:(double)arg1 ;
-(void)setEnableInAllApps:(BOOL)arg1 ;
-(void)setEnableOnRemoteViews:(BOOL)arg1 ;
-(void)setEnableViewControllerSupport:(BOOL)arg1 ;
-(void)setUCBPaletteEnabled:(BOOL)arg1 ;
-(void)setAlwaysIncludeReturnKeyAndInputAssistantItems:(BOOL)arg1 ;
-(void)setHideDefaultReturnKeyWhenSpecialReturnKeyIsPresent:(BOOL)arg1 ;
-(void)setEnableReserveSpace:(BOOL)arg1 ;
-(void)setEnableReserveSpaceTapForNewlines:(BOOL)arg1 ;
-(void)setAsyncElementRequestTimeout:(double)arg1 ;
-(void)setDrawingGestureMinimumPanDistanceThreshold:(double)arg1 ;
-(void)setDrawingGestureMinimumScrollDistanceThreshold:(double)arg1 ;
-(void)setDrawingGestureTapDetectionTimeInterval:(double)arg1 ;
-(void)setDrawingGestureTapDetectionDistanceThreshold:(double)arg1 ;
-(void)setDrawingGestureDetectTapAwayFromCurrentStrokesHorizontalDistance:(double)arg1 ;
-(void)setDrawingGestureDetectTapAwayFromCurrentStrokesVerticalDistance:(double)arg1 ;
-(void)setDrawingGestureLongPressMaxDistance:(double)arg1 ;
-(void)setDrawingGestureLongPressDetectionTimeInterval:(double)arg1 ;
-(void)setInkWeight:(double)arg1 ;
-(void)setInkWeightForIncreasedContrast:(double)arg1 ;
-(void)setLineBreakVerticalBarGestureEnabled:(BOOL)arg1 ;
-(void)setLineBreakVerticalBarUpToDelete:(BOOL)arg1 ;
-(void)setAutoLineBreakEnabled:(BOOL)arg1 ;
-(void)setAutoLineBreakRequireWeakCursor:(BOOL)arg1 ;
-(void)setAutoLineBreakVerticalDistance:(double)arg1 ;
-(void)setAutoLineBreakDualVerticalDistance:(double)arg1 ;
-(void)setAutoLineBreakAreaWidthFactor:(double)arg1 ;
-(void)setEnableWeakCursor:(BOOL)arg1 ;
-(void)setWeakCursorVisibilityTimeout:(double)arg1 ;
-(void)setStrongCursorRestoreDelay:(double)arg1 ;
-(void)setScratchOutMakesTheCursorStrong:(BOOL)arg1 ;
-(void)setEnableTargetedAppWorkarounds:(BOOL)arg1 ;
-(void)setChineseSupportEnabled:(BOOL)arg1 ;
-(void)setUseSlidingCanvas:(BOOL)arg1 ;
-(void)setSlidingCanvasDebugBorder:(BOOL)arg1 ;
-(void)setSlidingCanvasWidth:(double)arg1 ;
-(void)setSlidingCanvasHeight:(double)arg1 ;
-(void)setUseSingleComponentCanvas:(BOOL)arg1 ;
-(void)setUseLargeHitTestArea:(BOOL)arg1 ;
-(void)setStrongCursorMaximumYDistance:(double)arg1 ;
-(void)setAlwaysAllowInSpringBoard:(BOOL)arg1 ;
-(void)setUseTransformStrokesAnimation:(BOOL)arg1 ;
-(void)loadSettingsFromDictionary:(id)arg1 ;
-(id)settingsDictionaryRepresentation;
-(id)_remappedBaseLanguage:(id)arg1 ;
-(id)_enabledLanguagesFromSettingsChineseSupported:(BOOL)arg1 ;
-(id)_currentSupportedLocale;
-(BOOL)forceUserTextInputSettingEnabled;
-(id)availableRecognitionLocaleIdentifiers;
-(id)defaultRecognitionLocaleIdentifierFromAvailableIdentifiers:(id)arg1 ;
-(void)setRecognitionLocaleIdentifier:(NSString *)arg1 ;
-(void)_scheduledSaveSettingsTriggered;
-(void)saveSettingsToUserDefaults;
-(void)resetToDefaultValues;
-(BOOL)supportedKeyboardLocaleExists;
-(void)setForceUserTextInputSettingEnabled:(BOOL)arg1 ;
-(NSArray *)_inputModesForTesting;
-(void)set_inputModesForTesting:(NSArray *)arg1 ;
-(void)_performOperations:(/*^block*/id)arg1 withActiveInputModes:(id)arg2 ;
-(void)_performOperations:(/*^block*/id)arg1 withActiveInputModeIdentifiers:(id)arg2 ;
@end

