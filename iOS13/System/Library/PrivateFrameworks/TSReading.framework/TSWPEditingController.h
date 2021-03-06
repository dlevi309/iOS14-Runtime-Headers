/*
* Generated on Monday, March 1, 2021 at 2:33:18 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/TSReading.framework/TSReading
*/

#import <TSReading/TSReading-Structs.h>
#import <TSReading/TSDAutoscrollDelegate.h>
#import <TSReading/TSDGestureTarget.h>
#import <TSReading/TSKPopoverBasedViewControllerDelegate.h>
#import <TSReading/TSWPReferenceLibraryViewControllerDelegate.h>
#import <TSReading/TSDTextInput.h>
#import <TSReading/TSDTrackerManipulator.h>
#import <TSReading/TSKChangeSourceObserver.h>

@protocol TSWPDismissBlockPopover, TSDEditor, TSDAnnotationHosting;
@class UIView, TSWPStorage, TSWPInteractiveCanvasController, TSWPReferenceLibraryViewController, UIPopoverController, TSKPopoverBasedViewController, TSWPSelection, NSAttributedString, TSWPCharacterStyle, TSDAutoscroll, NSArray, TSWPTextKnobTracker, TSKFidgetResolver, NSString, NSDictionary, TSDMultiPaneController, NSMutableDictionary, TSDInteractiveCanvasController, NSSet;

@interface TSWPEditingController : NSObject <TSDAutoscrollDelegate, TSDGestureTarget, TSKPopoverBasedViewControllerDelegate, TSWPReferenceLibraryViewControllerDelegate, TSDTextInput, TSDTrackerManipulator, TSKChangeSourceObserver> {

	TSWPStorage* _storage;
	unsigned long long _initialStorageChangeCount;
	TSWPInteractiveCanvasController* _interactiveCanvasController;
	TSWPReferenceLibraryViewController* _definitionViewController;
	UIPopoverController* _definitionPopoverController;
	TSKPopoverBasedViewController*<TSWPDismissBlockPopover> _rubyTextViewController;
	BOOL _cancelRubyText;
	TSWPSelection* _selection;
	NSRange _markedRange;
	NSAttributedString* _markedText;
	TSWPCharacterStyle* _insertionStyle;
	unsigned long long _selectionAnchor;
	BOOL _coalescingText;
	BOOL _canCoalesce;
	BOOL _selectionLastModifiedWithKnob;
	BOOL _selectionLastModifiedWithKeyboard;
	BOOL _knobTracking;
	BOOL _tapAndLongPressIsPossible;
	BOOL _ignoreFutureImmediatePresses;
	unsigned long long _knobTag;
	CGPoint _knobTrackingDragPoint;
	unsigned _knobTrackingTapCount;
	BOOL _isBecomingActive;
	NSRange _originalSelectionRange;
	TSDAutoscroll* _autoscroll;
	CGPoint _autoscrollPoint;
	BOOL _magnifying;
	NSArray* _suggestions;
	id<TSDEditor> _hostEditor;
	BOOL _suppressBreaks;
	BOOL _suppressTabs;
	BOOL _suppressPhonetics;
	BOOL _disableInspector;
	BOOL _supportsDataDetectors;
	BOOL _isEditingPlainText;
	BOOL _suppressEditMenu;
	unsigned long long _initialPressTextSelectionGranularity;
	BOOL _shouldShowEditMenuForInsertionPoint;
	BOOL _showNextEditMenu;
	CGPoint _knobToTouchOffset;
	TSWPTextKnobTracker* _knobTracker;
	BOOL _readyToEnd;
	BOOL _shouldDisplayKeyboard;
	TSKFidgetResolver* _fidgetResolver;
	BOOL _editMenuIsVisible;
	NSString* _mostRecentGestureKind;
	BOOL _gestureBeganWhenEditingBegan;
	BOOL _annotationWasShowingAtStartOfGesture;
	unsigned long long _currentSelectionFlags;
	NSDictionary* _tapInfo;
	TSDMultiPaneController* _insertBreakPopoverController;
	NSMutableDictionary* _dictationInterpretations;
	NSMutableDictionary* _autocorrectedEntries;
	id<TSDAnnotationHosting> _previousSelectedAnnotation;
	UIView* _inputViewForHidingKeyboard;
	BOOL _suppressDataDetectorsOnResignTextInput;
	BOOL _canCoalesceBreakingCharacters;

}

@property (assign,nonatomic) BOOL coalescingText;                                                          //@synthesize coalescingText=_coalescingText - In the implementation block
@property (assign,nonatomic) BOOL canCoalesceBreakingCharacters;                                           //@synthesize canCoalesceBreakingCharacters=_canCoalesceBreakingCharacters - In the implementation block
@property (nonatomic,retain,readonly) TSWPStorage * storage;                                               //@synthesize storage=_storage - In the implementation block
@property (nonatomic,readonly) TSWPInteractiveCanvasController * interactiveCanvasController;              //@synthesize interactiveCanvasController=_interactiveCanvasController - In the implementation block
@property (assign,nonatomic) BOOL canCoalesce;                                                             //@synthesize canCoalesce=_canCoalesce - In the implementation block
@property (assign,nonatomic) BOOL isBecomingActive;                                                        //@synthesize isBecomingActive=_isBecomingActive - In the implementation block
@property (assign,nonatomic) BOOL knobTracking;                                                            //@synthesize knobTracking=_knobTracking - In the implementation block
@property (assign,nonatomic) unsigned long long knobTag;                                                   //@synthesize knobTag=_knobTag - In the implementation block
@property (assign,nonatomic) CGPoint knobTrackingDragPoint;                                                //@synthesize knobTrackingDragPoint=_knobTrackingDragPoint - In the implementation block
@property (assign,nonatomic) unsigned knobTrackingTapCount;                                                //@synthesize knobTrackingTapCount=_knobTrackingTapCount - In the implementation block
@property (assign,nonatomic) id<TSDEditor> hostEditor;                                                     //@synthesize hostEditor=_hostEditor - In the implementation block
@property (assign,nonatomic) BOOL suppressBreaks;                                                          //@synthesize suppressBreaks=_suppressBreaks - In the implementation block
@property (assign,nonatomic) BOOL suppressPhonetics;                                                       //@synthesize suppressPhonetics=_suppressPhonetics - In the implementation block
@property (assign,nonatomic) BOOL suppressTabs;                                                            //@synthesize suppressTabs=_suppressTabs - In the implementation block
@property (assign,nonatomic) BOOL disableInspector;                                                        //@synthesize disableInspector=_disableInspector - In the implementation block
@property (nonatomic,readonly) BOOL suppressesTextInspector; 
@property (assign,nonatomic) BOOL supportsDataDetectors;                                                   //@synthesize supportsDataDetectors=_supportsDataDetectors - In the implementation block
@property (assign,nonatomic) BOOL isEditingPlainText;                                                      //@synthesize isEditingPlainText=_isEditingPlainText - In the implementation block
@property (nonatomic,readonly) BOOL suppressDataDetectorsOnResignTextInput;                                //@synthesize suppressDataDetectorsOnResignTextInput=_suppressDataDetectorsOnResignTextInput - In the implementation block
@property (assign,nonatomic) BOOL shouldDisplayKeyboard;                                                   //@synthesize shouldDisplayKeyboard=_shouldDisplayKeyboard - In the implementation block
@property (nonatomic,readonly) NSAttributedString * markedText;                                            //@synthesize markedText=_markedText - In the implementation block
@property (assign,nonatomic) unsigned long long insertionPoint; 
@property (nonatomic,readonly) TSWPCharacterStyle * insertionStyle;                                        //@synthesize insertionStyle=_insertionStyle - In the implementation block
@property (nonatomic,readonly) unsigned long long currentSelectionFlags;                                   //@synthesize currentSelectionFlags=_currentSelectionFlags - In the implementation block
@property (nonatomic,readonly) BOOL selectionLastModifiedWithKnob;                                         //@synthesize selectionLastModifiedWithKnob=_selectionLastModifiedWithKnob - In the implementation block
@property (nonatomic,readonly) BOOL selectionLastModifiedWithKeyboard;                                     //@synthesize selectionLastModifiedWithKeyboard=_selectionLastModifiedWithKeyboard - In the implementation block
@property (nonatomic,retain) TSWPSelection * selection;                                                    //@synthesize selection=_selection - In the implementation block
@property (nonatomic,readonly) TSDInteractiveCanvasController * icc; 
@property (nonatomic,retain) TSDAutoscroll * autoscroll;                                                   //@synthesize autoscroll=_autoscroll - In the implementation block
@property (assign,nonatomic) CGPoint autoscrollPoint;                                                      //@synthesize autoscrollPoint=_autoscrollPoint - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) NSSet * selectedObjectsSupportingFill; 
@property (nonatomic,readonly) NSSet * selectedObjectsSupportingStroke; 
@property (nonatomic,readonly) NSSet * selectedObjectsSupportingShadow; 
@property (nonatomic,readonly) NSSet * selectedObjectsSupportingReflection; 
@property (nonatomic,readonly) NSSet * selectedObjectsSupportingOpacity; 
@property (nonatomic,readonly) NSSet * selectedObjectsSupportingTextInset; 
@property (nonatomic,readonly) NSSet * selectedObjectsSupportingConnectionLineAttributes; 
@property (nonatomic,readonly) NSSet * selectedObjectsSupportingEndpoints; 
@property (nonatomic,readonly) NSSet * selectedObjectsSupportingSmartShapeAttributes; 
@property (nonatomic,readonly) NSSet * selectedObjectsSupportingResize; 
@property (nonatomic,readonly) NSSet * selectedObjectsSupportingShrinkTextToFit; 
@property (nonatomic,retain,readonly) TSKSelection*<TSDTextSelection> textInputSelection; 
@property (nonatomic,readonly) NSRange markedRange; 
@property (retain,readonly) UIView * inputView; 
@property (retain,readonly) UIView * inputAccessoryView; 
@property (readonly) BOOL wantsRawArrowKeyEvents; 
@property (nonatomic,retain) TSKSelection*<TSDTextSelection> selectionForArrowKeys; 
+(id)_targetedDragPreviewForSelection:(id)arg1 interactiveCanvasController:(id)arg2 reps:(id)arg3 applyScale:(BOOL)arg4 imageFrameUnion:(CGRect*)arg5 ;
+(id)dragItemForHitRepWithDragInteraction:(id)arg1 session:(id)arg2 canvasView:(id)arg3 icc:(id)arg4 withTouchPoint:(CGPoint)arg5 ;
+(id)previewForDragItem:(id)arg1 ;
+(id)retargetedDragItem:(id)arg1 withDefault:(id)arg2 canvasView:(id)arg3 icc:(id)arg4 ;
+(id)dropProposalForSession:(id)arg1 ;
-(void)dealloc;
-(void)endEditing;
-(TSWPStorage *)storage;
-(id)model;
-(id)tracker;
-(void)teardown;
-(NSRange)markedRange;
-(UIView *)inputAccessoryView;
-(UIView *)inputView;
-(long long)returnKeyType;
-(void)deleteBackward;
-(void)replaceRange:(NSRange)arg1 withText:(id)arg2 ;
-(id)textInRange:(NSRange)arg1 ;
-(void)insertText:(id)arg1 ;
-(void)setMarkedText:(id)arg1 selectedRange:(NSRange)arg2 ;
-(void)copy:(id)arg1 ;
-(id)selectionRectsForRange:(NSRange)arg1 ;
-(void)willEnterForeground;
-(void)didEnterBackground;
-(CGRect)firstRectForRange:(NSRange)arg1 ;
-(NSAttributedString *)markedText;
-(TSWPSelection *)selection;
-(void)select:(id)arg1 ;
-(void)selectAll:(id)arg1 ;
-(NSRange)editRange;
-(void)autoscrollWillNotStart;
-(void)setSelection:(TSWPSelection *)arg1 ;
-(TSDAutoscroll *)autoscroll;
-(void)setAutoscroll:(TSDAutoscroll *)arg1 ;
-(BOOL)handleGesture:(id)arg1 ;
-(unsigned long long)textLength;
-(void)deleteForward;
-(id)styleProvider;
-(id)currentFontColor;
-(BOOL)isBecomingActive;
-(id)documentRoot;
-(TSDInteractiveCanvasController *)icc;
-(TSWPInteractiveCanvasController *)interactiveCanvasController;
-(id)selectionWithRange:(NSRange)arg1 ;
-(int)canPerformEditorAction:(SEL)arg1 withSender:(id)arg2 ;
-(BOOL)wantsCaret;
-(BOOL)wantsKeyboard;
-(BOOL)canAddOrShowComment;
-(BOOL)isParagraphModeWithSelection:(id)arg1 onStorage:(id)arg2 ;
-(void)tappedOnKnob:(id)arg1 ;
-(id)editingReps;
-(id)editorKeyboardLanguage;
-(void)asyncProcessChanges:(id)arg1 forChangeSource:(id)arg2 ;
-(id)pasteboardController;
-(void)popoverControllerDidDismissPopoverBasedViewController:(id)arg1 ;
-(void)setSelection:(id)arg1 withFlags:(unsigned long long)arg2 ;
-(void)didBecomeCurrentEditor;
-(void)willResignCurrentEditor;
-(void)didBecomeTextInputEditor;
-(void)willResignTextInputEditor;
-(id)editingSearchReference;
-(id)topLevelInspectorAutosaveName;
-(id)extraMenuItems;
-(double)viewScaleForSelectionWithTargetPointSize:(double)arg1 ;
-(double)targetPointSizeForSelectionWithViewScale:(double)arg1 ;
-(void)beginAutomaticTextEditingIfNeededForPoint:(CGPoint)arg1 ;
-(BOOL)allowAutomaticTextEditingToBeginWithDifferentEditor;
-(BOOL)textIsVerticalAtCharIndex:(unsigned long long)arg1 ;
-(void)extendSelectionLeft;
-(void)extendSelectionRight;
-(id)textColorAtCharIndex:(unsigned long long)arg1 ;
-(id)textFontAtCharIndex:(unsigned long long)arg1 ;
-(void)setSelectionWithRange:(NSRange)arg1 endOfLine:(BOOL)arg2 ;
-(void)clearMarkedRange;
-(BOOL)isCharIndex:(unsigned long long)arg1 withEolAffinity:(BOOL)arg2 atBoundary:(long long)arg3 inDirection:(long long)arg4 ;
-(unsigned long long)charIndexByMovingPosition:(id)arg1 toBoundary:(long long)arg2 inDirection:(long long)arg3 preferPosition:(double*)arg4 ;
-(BOOL)isCharIndex:(unsigned long long)arg1 withinTextUnit:(long long)arg2 inDirection:(long long)arg3 ;
-(NSRange)rangeOfWordEnclosingCharIndex:(unsigned long long)arg1 backward:(BOOL)arg2 ;
-(TSKSelection*<TSDTextSelection>)textInputSelection;
-(long long)writingDirectionForCharIndex:(unsigned long long)arg1 ;
-(void)endEditingAndSelectParent:(id)arg1 ;
-(unsigned long long)closestCharIndexToPoint:(CGPoint)arg1 isAtEndOfLine:(BOOL*)arg2 ;
-(id)unfilteredText;
-(BOOL)canHandleGesture:(id)arg1 ;
-(void)gestureSequenceWillBegin;
-(void)gestureSequenceDidEnd;
-(void)updateAfterAutoscroll:(id)arg1 ;
-(CGPoint)autoscrollPoint;
-(void)setAutoscrollPoint:(CGPoint)arg1 ;
-(BOOL)allowTrackerManipulatorToTakeControl:(id)arg1 ;
-(BOOL)readyToEndOperation;
-(void)operationDidEnd;
-(void)copyObject:(id)arg1 ;
-(void)setKnobTracking:(BOOL)arg1 ;
-(void)setKnobTag:(unsigned long long)arg1 ;
-(void)setKnobTrackingDragPoint:(CGPoint)arg1 ;
-(unsigned)knobTrackingTapCount;
-(id)logicalToVisualSelection:(id)arg1 ;
-(id)calculateVisualRunsFromSelection:(id)arg1 updateControllerSelection:(BOOL)arg2 ;
-(BOOL)isInParagraphMode;
-(void)revertLastSelectionChangeIfElapsedTimeIsUnderPinFidgetThreshold;
-(void)referenceLibrarayViewControllerWasDismissed:(id)arg1 ;
-(BOOL)selectionLastModifiedWithKnob;
-(BOOL)selectionLastModifiedWithKeyboard;
-(unsigned long long)currentSelectionFlags;
-(BOOL)pIsSelectionPlaceHolderTextWithSelection:(id)arg1 ;
-(void)setIsBecomingActive:(BOOL)arg1 ;
-(void)setShouldDisplayKeyboard:(BOOL)arg1 ;
-(void)p_inputLanguageDidChangeNotification:(id)arg1 ;
-(void)setSupportsDataDetectors:(BOOL)arg1 ;
-(void)setSuppressPhonetics:(BOOL)arg1 ;
-(void)p_cancelDelayedSelectors;
-(void)setCanCoalesceBreakingCharacters:(BOOL)arg1 ;
-(void)setKnobTrackingTapCount:(unsigned)arg1 ;
-(void)dismissActivePopovers;
-(void)setCoalescingText:(BOOL)arg1 ;
-(void)willResignTextInputEditorAndDeselect:(BOOL)arg1 ;
-(void)protectedStopMagnification;
-(BOOL)isSelectionSingleAnchoredDrawableAttachment;
-(void)p_dismissDefinitionPopover;
-(void)p_updateHUDState;
-(void)p_rescheduleDelayedUpdateHUDState;
-(BOOL)shouldShowEditMenu;
-(CGRect)p_targetRectForSelection:(id)arg1 ;
-(BOOL)canCenterHUD;
-(BOOL)editorCanHideEditMenu;
-(void)p_cancelTapAndLongPressPreviousSelector;
-(double)p_effectiveFontSizeForCurrentSelection;
-(BOOL)swipeableParagraphIsSelected;
-(BOOL)p_respondsToListGestures;
-(BOOL)canHandleSwipeGestureForGestureRecognizer:(id)arg1 outDelta:(long long*)arg2 outTextDirection:(long long*)arg3 outLayoutDirection:(long long*)arg4 ;
-(unsigned long long)insertionPoint;
-(void)p_clearEditMenuFlags;
-(void)p_createKnobTracker:(id)arg1 forRep:(id)arg2 tapCount:(unsigned long long)arg3 ;
-(void)p_beginOperationAndTakeControl;
-(void)p_handleKnobDragGestureRecognizer:(id)arg1 ;
-(void)tappedInRep:(id)arg1 point:(CGPoint)arg2 tapCount:(unsigned long long)arg3 isTapHold:(BOOL)arg4 precise:(BOOL)arg5 ;
-(void)p_beginMagnification:(id)arg1 forRep:(id)arg2 atPoint:(CGPoint)arg3 ;
-(void)p_setSelectionFromPoint:(CGPoint)arg1 textSelectionGranularity:(unsigned long long)arg2 includeListLabels:(BOOL)arg3 ;
-(void)p_endAutoscroll;
-(id)p_updateEditingRepIfApplicableWithGesture:(id)arg1 unscaledCanvasPoint:(CGPoint)arg2 ;
-(void)endHardPressGestureRecognizer:(id)arg1 ;
-(void)p_beginTapAndLongPress:(id)arg1 ;
-(void)selectionChangedWithFlags:(unsigned long long)arg1 wpFlags:(unsigned long long)arg2 ;
-(void)p_beginKnobTrackingSelection:(id)arg1 forRep:(id)arg2 atPoint:(CGPoint)arg3 ;
-(unsigned long long)charIndexInRep:(id)arg1 fromPoint:(CGPoint)arg2 allowPastBreak:(BOOL)arg3 isAtEndOfLine:(BOOL*)arg4 leadingEdge:(BOOL*)arg5 ;
-(void)p_handleSwipeMoveCaretWithTextGranularity:(long long)arg1 textDirection:(long long)arg2 layoutDirection:(long long)arg3 ;
-(void)p_handleLongPressGesture:(id)arg1 ;
-(void)p_handleTapAndTouchGesture:(id)arg1 ;
-(void)p_handleTapGestures:(id)arg1 ;
-(void)setInsertionPoint:(unsigned long long)arg1 withFlags:(unsigned long long)arg2 ;
-(void)p_setSelection:(id)arg1 withFlags:(unsigned long long)arg2 force:(BOOL)arg3 ;
-(id)p_extendSelectionToIncludeSmartFields:(id)arg1 ;
-(id)extendSelectionToParagraphs:(id)arg1 ;
-(void)p_setRevertibleSelection:(id)arg1 ;
-(void)p_postSelectionContentsChangedNotification;
-(BOOL)trackingKnobInParagraphMode;
-(BOOL)p_canEditTextString;
-(id)p_columnForCharIndex:(unsigned long long)arg1 withStorage:(id)arg2 ;
-(BOOL)knobTracking;
-(void)p_sendHandleTapNotification;
-(unsigned long long)textSelectionGranularityForTapCount:(unsigned long long)arg1 ;
-(id)p_selectionForRep:(id)arg1 point:(CGPoint)arg2 textSelectionGranularity:(unsigned long long)arg3 isTapHold:(BOOL)arg4 precise:(BOOL)arg5 includeListLabels:(BOOL)arg6 allowPastBreak:(BOOL)arg7 selectsEntireLink:(BOOL)arg8 ;
-(void)p_setTappedSelection:(id)arg1 ;
-(BOOL)p_hitListLabelAtCharIndex:(unsigned long long)arg1 atNaturalPoint:(CGPoint)arg2 inRep:(id)arg3 ;
-(id)dictationInterpretationsAtCharIndex:(unsigned long long)arg1 outRange:(NSRange*)arg2 ;
-(unsigned long long)charIndexInRep:(id)arg1 fromPoint:(CGPoint)arg2 allowPastBreak:(BOOL)arg3 allowNotFound:(BOOL)arg4 pastCenterGoesToNextChar:(BOOL)arg5 isAtEndOfLine:(BOOL*)arg6 ;
-(unsigned long long)charIndexInRep:(id)arg1 fromPoint:(CGPoint)arg2 allowPastBreak:(BOOL)arg3 allowNotFound:(BOOL)arg4 isAtEndOfLine:(BOOL*)arg5 ;
-(unsigned long long)p_charIndexByMovingCharIndex:(unsigned long long)arg1 withEolAffinity:(BOOL*)arg2 toBoundary:(int)arg3 inDirection:(long long)arg4 preferPosition:(double*)arg5 isLeadingEdge:(BOOL*)arg6 ;
-(BOOL)textStorage:(id)arg1 hasWhitespaceBoundedWordAtSelection:(id)arg2 ;
-(unsigned long long)p_leftEdgeForSelection:(id)arg1 withLeadingEdge:(BOOL*)arg2 ;
-(unsigned long long)charIndexMovingByCharacterFromCharIndex:(unsigned long long)arg1 inDirection:(long long)arg2 ;
-(unsigned long long)p_rightEdgeForSelection:(id)arg1 withLeadingEdge:(BOOL*)arg2 ;
-(NSRange)p_adjustVisualSelection:(id)arg1 withOtherSelection:(id)arg2 ;
-(BOOL)p_selectionIsSimpleInsertionPoint;
-(BOOL)pIsSelectionPlaceHolderText;
-(void)customSelect:(id)arg1 ;
-(BOOL)p_canSelectAllWithSender:(id)arg1 ;
-(void)customSelectAll:(id)arg1 ;
-(void)noReplacementsFound:(id)arg1 ;
-(void)definitionAction:(id)arg1 ;
-(int)p_canPerformOptInEditorAction:(SEL)arg1 withSender:(id)arg2 ;
-(id)currentLayoutParent;
-(void)p_addCommonEditItemsIntoMenu:(id)arg1 ;
-(void)p_switchToReplaceSelection;
-(id)p_viewControllerForPresenting;
-(id)p_documentViewController;
-(CGRect)p_firstRectForRange:(NSRange)arg1 actualRange:(NSRange*)arg2 ;
-(BOOL)canShowCommentForCurrentSelectionGetHighlight:(id*)arg1 range:(NSRange*)arg2 ;
-(id)p_highlightSelectionForSelection:(id)arg1 ;
-(BOOL)canRemoveHighlightForCurrentSelection;
-(BOOL)canHighlightCurrentSelection;
-(BOOL)p_isCharIndex:(unsigned long long)arg1 withEolAffinity:(BOOL)arg2 atBoundary:(int)arg3 inDirection:(long long)arg4 ;
-(int)p_writingDirectionForCharAtIndex:(unsigned long long)arg1 ;
-(id)p_layoutTargetForCharIndex:(unsigned long long)arg1 eolAffinity:(BOOL)arg2 ;
-(const TSWPLineFragment*)p_lineFragmentForCharIndex:(unsigned long long)arg1 column:(id*)arg2 eol:(BOOL)arg3 ;
-(unsigned long long)p_lineIndexForCharIndex:(unsigned long long)arg1 column:(id*)arg2 eol:(BOOL)arg3 ;
-(unsigned long long)p_layoutOrderCharIndexForCaretCharIndex:(unsigned long long)arg1 inDirection:(long long)arg2 ;
-(unsigned long long)p_caretCharIndexForLayoutOrderCharIndex:(unsigned long long)arg1 inDirection:(long long)arg2 ;
-(unsigned long long)p_MoveByLineRange:(NSRange)arg1 up:(BOOL)arg2 ;
-(const TSWPLineFragment*)p_lastVisibleLineFragmentForCharIndex:(unsigned long long)arg1 eol:(BOOL)arg2 ;
-(const TSWPLineFragment*)p_nearestLineFragmentWithSameVerticalPositionAs:(unsigned long long)arg1 xPos:(double)arg2 inColumn:(id)arg3 ;
-(unsigned long long)charIndexMovingByWordFromCharIndex:(unsigned long long)arg1 inDirection:(long long)arg2 ;
-(BOOL)p_isCharIndex:(unsigned long long)arg1 withinTextUnit:(int)arg2 inDirection:(long long)arg3 ;
-(unsigned long long)p_adjustedCharIndexForWordTestingFromCharIndex:(unsigned long long)arg1 forDirection:(long long)arg2 ;
-(BOOL)shouldDisplayKeyboard;
-(BOOL)isDisplayingPhoneticsHUD;
-(id)p_containingShapeRep;
-(id)_repsForStorage:(id)arg1 selection:(id)arg2 ;
-(id)_repsForStorage:(id)arg1 selection:(id)arg2 ;
-(id)_addSelectionRectsForLayout:(id)arg1 selection:(id)arg2 ;
-(id)p_columnForCharIndex:(unsigned long long)arg1 ;
-(id)p_selectionFromUnscaledCanvasPoint:(CGPoint)arg1 textSelectionGranularity:(unsigned long long)arg2 isTapHold:(BOOL)arg3 allowPastBreak:(BOOL)arg4 selectsEntireLink:(BOOL)arg5 ;
-(void)p_adjustSelection:(id)arg1 withOtherSelection:(id)arg2 textSelectionGranularity:(unsigned long long)arg3 ;
-(BOOL)p_keyboardShouldShowOnscreen;
-(id)initWithStorage:(id)arg1 interactiveCanvasController:(id)arg2 ;
-(void)cancelKnobTrackingAndMagnifying;
-(id)p_editingRepForCharIndex:(unsigned long long)arg1 ;
-(void)p_suppressSelectionHighlight:(BOOL)arg1 ;
-(BOOL)wantsDoneButtonWhenEditing;
-(void)updateHUDState;
-(void)p_highlightRubyTextWithRange:(NSRange)arg1 ;
-(void)p_clearSecondaryHighlight;
-(id)p_wordRangesForRange:(NSRange)arg1 ;
-(CGRect)p_adjustedPopoverTargetRectForRange:(NSRange)arg1 ;
-(BOOL)isUnscaledPointInTextSelection:(CGPoint)arg1 ;
-(BOOL)p_respondsToHyperlinkGestures;
-(BOOL)p_respondsToRubyGestures;
-(id)p_repForSwipeAtUnscaledLocation:(CGPoint)arg1 ;
-(CGPoint)p_clampPointToLine:(CGPoint)arg1 trackingRep:(id)arg2 ;
-(void)handleHardPressGestureRecognizer:(id)arg1 ;
-(void)setInsertionPoint:(unsigned long long)arg1 ;
-(void)p_postWillStyleTextNotification;
-(unsigned long long)countOfHyperlinksInUserSelection;
-(id)p_hitRepWithPoint:(CGPoint)arg1 keyboardAdjustmentDelta:(double)arg2 ;
-(id)selectionForRep:(id)arg1 point:(CGPoint)arg2 textSelectionGranularity:(unsigned long long)arg3 ;
-(BOOL)pStorageCanAcceptDrawableAttachments;
-(NSRange)smartDeletionSelection:(id)arg1 isVisual:(BOOL*)arg2 ;
-(CGRect)overrideCaretRectForSelection:(id)arg1 ;
-(CGRect)targetRectForSelection:(id)arg1 ;
-(BOOL)p_canInsertBreak;
-(id)stringFromSelection;
-(void)copyToPasteboard:(id)arg1 ;
-(BOOL)selectionIsOnEmptyParagraph;
-(BOOL)canSetWritingDirection:(int)arg1 ;
-(BOOL)editorKeyboardLanguageIsRTL;
-(void)p_addInsertItemsIntoMenu:(id)arg1 ;
-(void)replaceAction:(id)arg1 ;
-(void)styleAction:(id)arg1 ;
-(BOOL)p_isTextInputEditor;
-(BOOL)canAcceptOrRejectChange;
-(unsigned long long)p_charIndexAtPoint:(CGPoint)arg1 isAtEndOfLine:(BOOL*)arg2 ;
-(void)invalidateSelectionVisualRuns;
-(void)dismissPhoneticsHUDAnimated:(BOOL)arg1 ;
-(void)cancelPhoneticsHUDAnimated:(BOOL)arg1 ;
-(BOOL)p_isIgnoringKeyboardInput;
-(void)abandonMarkedText;
-(void)p_setInsertionStyle:(id)arg1 ;
-(id)characterStyleForDeletedRange:(NSRange)arg1 ;
-(void)setSelectionWithRange:(NSRange)arg1 leadingEdge:(BOOL)arg2 endOfLine:(BOOL)arg3 ;
-(void)willBeginMagnification;
-(id)selectionFromUnscaledCanvasPoint:(CGPoint)arg1 textSelectionGranularity:(unsigned long long)arg2 isTapHold:(BOOL)arg3 allowPastBreak:(BOOL)arg4 selectsEntireLink:(BOOL)arg5 ;
-(void)p_adjustSelection:(id)arg1 withUnscaledCanvasPoint:(CGPoint)arg2 textSelectionGranularity:(unsigned long long)arg3 isTapHold:(BOOL)arg4 allowPastBreak:(BOOL)arg5 ;
-(BOOL)textEditingSupportsFormatBar;
-(id)p_previousAutocorrectionForWordAtCharIndex:(unsigned long long)arg1 outRange:(NSRange*)arg2 ;
-(int)valueForWritingDirectionPropertyForInspector:(id)arg1 ;
-(void)p_removeAutocorrectionAtCharIndex:(unsigned long long)arg1 ;
-(void)addAllDictationInterpretationRangesInRange:(NSRange)arg1 toRanges:(TSWPRangeVector*)arg2 ;
-(BOOL)suppressesTextInspector;
-(BOOL)shouldShowSelectedTextAsFocused;
-(unsigned long long)knobTag;
-(CGPoint)knobTrackingDragPoint;
-(TSWPCharacterStyle *)insertionStyle;
-(BOOL)canCoalesce;
-(void)setCanCoalesce:(BOOL)arg1 ;
-(BOOL)supportsDataDetectors;
-(BOOL)isEditingPlainText;
-(void)setIsEditingPlainText:(BOOL)arg1 ;
-(BOOL)suppressDataDetectorsOnResignTextInput;
-(id<TSDEditor>)hostEditor;
-(void)setHostEditor:(id<TSDEditor>)arg1 ;
-(BOOL)suppressBreaks;
-(void)setSuppressBreaks:(BOOL)arg1 ;
-(BOOL)suppressPhonetics;
-(BOOL)suppressTabs;
-(void)setSuppressTabs:(BOOL)arg1 ;
-(BOOL)disableInspector;
-(void)setDisableInspector:(BOOL)arg1 ;
-(BOOL)coalescingText;
-(BOOL)canCoalesceBreakingCharacters;
-(id)tsax_listItemLabelForCharIndex:(unsigned long long)arg1 textIsLiteral:(BOOL*)arg2 ;
-(NSRange)tsax_rangeOfLineFragmentAtCharIndex:(unsigned long long)arg1 ;
-(id)dragItemForCurrentSelectionWithDragInteraction:(id)arg1 session:(id)arg2 withTouchPoint:(CGPoint)arg3 ;
-(unsigned long long)charIndexMovingByCharacterFromCharIndex:(unsigned long long)arg1 leadingEdge:(BOOL*)arg2 inDirection:(long long)arg3 ;
-(NSRange)p_expandParagraphRangeForEnumerator:(TSWPParagraphEnumerator*)arg1 ;
-(BOOL)p_isLayoutLeftToRightAtCharIndex:(unsigned long long)arg1 ;
-(CFStringTokenizerRef)p_createTokenizerForCharIndex:(unsigned long long)arg1 outTokenizerRange:(NSRange*)arg2 ;
-(int)p_moveFromCharIndex:(unsigned long long*)arg1 tokenizerRef:(_CFStringTokenizer*)arg2 tokenizerRange:(NSRange*)arg3 direction:(long long)arg4 currentWordRange:(NSRange)arg5 newWordRange:(NSRange*)arg6 reasonToStop:(unsigned)arg7 ;
-(void)p_selection:(id)arg1 toGlyphRange:(SCD_Struct_TS111*)arg2 ;
-(unsigned long long)p_LeftCharForInsertion:(const SCD_Struct_TS111*)arg1 ;
-(const TSWPLineFragment*)p_lineFragmentWithCaretInfo:(SCD_Struct_TS112*)arg1 forSelection:(id)arg2 ;
-(unsigned long long)p_getVisualDeletionIndexForSelection:(id)arg1 backward:(BOOL*)arg2 ;
-(unsigned long long)p_getVisualInsertionPointIndexForString:(id)arg1 selection:(id)arg2 ;
@end

