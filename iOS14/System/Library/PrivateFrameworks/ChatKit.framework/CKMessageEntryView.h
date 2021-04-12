/*
* Generated on Thursday, January 14, 2021 at 2:21:28 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/ChatKit.framework/ChatKit
*/

#import <ChatKit/ChatKit-Structs.h>
#import <UIKitCore/UIView.h>
#import <libobjc.A.dylib/CKMessageEntryContentViewDelegate.h>
#import <libobjc.A.dylib/CKAudioRecorderDelegate.h>
#import <libobjc.A.dylib/CKActionMenuControllerDelegate.h>
#import <libobjc.A.dylib/CKMessageEntryRecordedAudioViewDelegate.h>
#import <libobjc.A.dylib/CKActionMenuGestureRecognizerButtonDelegate.h>
#import <libobjc.A.dylib/CKInlineAudioReplyButtonDelegate.h>
#import <UIKit/UIGestureRecognizerDelegate.h>
#import <libobjc.A.dylib/CKBrowserSwitcherFooterViewDelegate.h>
#import <libobjc.A.dylib/CKMentionSuggestionViewDataSource.h>
#import <libobjc.A.dylib/CKMentionSuggestionViewDelegate.h>
#import <libobjc.A.dylib/CKPaddleOverlayViewDelegate.h>
#import <libobjc.A.dylib/CKTextEntryLayoutManagerMentionsDelegate.h>
#import <libobjc.A.dylib/CKAppSelectionInterface.h>
#import <libobjc.A.dylib/CKMessageEntryViewStyleProtocol.h>

@protocol CKMessageEntryViewDelegate, _UIClickInteractionDelegate, CKMessageEntryViewInputDelegate, UITextInputTraits_Private;
@class NSArray, NSString, CKConversation, CKEntryViewButton, CKMessageEntryContentView, CKMessageEntryWaveformView, UITraitCollection, UIView, _UIClickInteraction, CKActionMenuGestureRecognizerButton, CKInlineAudioReplyButtonController, UILabel, UIVisualEffectView, CKAudioRecorder, CKComposition, CKActionMenuController, CKMessageEntryRecordedAudioView, CKMessageEntryAudioHintView, UIInputContextHistory, CKBrowserSwitcherFooterView, UIButton, UIKBVisualEffectView, CKPaddleOverlayView, CKMentionSuggestionView, NSMutableSet, NSMutableDictionary, CKMentionEntityNode, CAMShutterButton, CKScheduledUpdater, UISwipeGestureRecognizer;

@interface CKMessageEntryView : UIView <CKMessageEntryContentViewDelegate, CKAudioRecorderDelegate, CKActionMenuControllerDelegate, CKMessageEntryRecordedAudioViewDelegate, CKActionMenuGestureRecognizerButtonDelegate, CKInlineAudioReplyButtonDelegate, UIGestureRecognizerDelegate, CKBrowserSwitcherFooterViewDelegate, CKMentionSuggestionViewDataSource, CKMentionSuggestionViewDelegate, CKPaddleOverlayViewDelegate, CKTextEntryLayoutManagerMentionsDelegate, CKAppSelectionInterface, CKMessageEntryViewStyleProtocol> {

	BOOL _showAppStrip;
	BOOL _shouldShowSendButton;
	BOOL _shouldShowSubject;
	BOOL _shouldShowPluginButtons;
	BOOL _shouldShowCharacterCount;
	BOOL _animatingLayoutChange;
	BOOL _keyboardVisible;
	BOOL _languageHasSpaces;
	BOOL _entryFieldCollapsed;
	BOOL _extendAppStripBlurToKeyplaneTop;
	BOOL _disablePluginButtons;
	BOOL _composingRecipient;
	BOOL _failedRecipients;
	BOOL _unreachableEmergencyRecipient;
	BOOL _sendingMessage;
	BOOL _characterCountHidden;
	BOOL _shouldCenterCharacterCount;
	BOOL _shouldAllowImpactSend;
	BOOL _performingActionMenuSend;
	BOOL _isTransitioningForBrowserSwitcher;
	BOOL _showingMentionsSuggestions;
	BOOL _isUpdatingMentionAttributedText;
	BOOL _entryFieldUpdaterCollapsedValue;
	BOOL _entryFieldUpdaterAnimatedValue;
	NSArray* _keyCommands;
	long long _style;
	NSString* _backdropGroupName;
	id<CKMessageEntryViewDelegate> _delegate;
	id<_UIClickInteractionDelegate> _clickInteractionDelegate;
	id<CKMessageEntryViewInputDelegate> _inputDelegate;
	CKConversation* _conversation;
	CKEntryViewButton* _browserButton;
	CKMessageEntryContentView* _contentView;
	CKMessageEntryWaveformView* _waveformView;
	CKEntryViewButton* _photoButton;
	CKEntryViewButton* _sendButton;
	UITraitCollection* _entryViewTraitCollection;
	UIView* _inputButtonContainerView;
	UIView* _buttonAndTextAreaContainerView;
	CKEntryViewButton* _cancelButton;
	CKEntryViewButton* _stopButton;
	CKEntryViewButton* _arrowButton;
	CKEntryViewButton* _sendAudioButton;
	_UIClickInteraction* _sendButtonClickInteraction;
	CKEntryViewButton* _audioButton;
	CKActionMenuGestureRecognizerButton* _audioActionMenuGestureRecognizerButton;
	CKInlineAudioReplyButtonController* _audioReplyButton;
	UILabel* _characterCountLabel;
	UIVisualEffectView* _backgroundView;
	UIVisualEffectView* _knockoutView;
	UIView* _knockoutCoverView;
	CKAudioRecorder* _recorder;
	CKComposition* _audioComposition;
	CKActionMenuController* _audioActionMenuController;
	CKMessageEntryRecordedAudioView* _recordedAudioView;
	CKMessageEntryAudioHintView* _audioHintView;
	unsigned long long _displayMode;
	UIView* _contentClipView;
	UIInputContextHistory* _inputContextHistory;
	UILabel* _collpasedPlaceholderLabel;
	CKBrowserSwitcherFooterView* _appStrip;
	UIButton* _emojiButton;
	UIView* _appStripBackgroundBlurContainerView;
	UIKBVisualEffectView* _appStripBackgroundBlurView;
	id<UITextInputTraits_Private> _lastConfiguredInputDelegate;
	CKPaddleOverlayView* _paddleOverlayView;
	CKMentionSuggestionView* _mentionSuggestionView;
	NSArray* _currentMentionSuggestions;
	NSMutableSet* _entityHandles;
	NSMutableSet* _recipientNames;
	NSMutableDictionary* _entityDictionary;
	CKMentionEntityNode* _entityTree;
	CAMShutterButton* _shutterButton;
	CKScheduledUpdater* _entryFieldCollapsedUpdater;
	UISwipeGestureRecognizer* _swipeGestureRecognizer;
	CGSize _inputButtonSize;
	CGSize _sendButtonSize;
	CGSize _characterCountSize;
	CGSize _waveformViewSize;
	NSRange _rangeOfTappedMention;
	UIEdgeInsets _marginInsets;
	UIEdgeInsets _coverInsets;
	CGRect _audioActionMenuFrame;

}

@property (assign,nonatomic) UIEdgeInsets coverInsets;                                                                  //@synthesize coverInsets=_coverInsets - In the implementation block
@property (assign,nonatomic) BOOL shouldShowSendButton;                                                                 //@synthesize shouldShowSendButton=_shouldShowSendButton - In the implementation block
@property (assign,nonatomic) BOOL shouldShowSubject;                                                                    //@synthesize shouldShowSubject=_shouldShowSubject - In the implementation block
@property (assign,nonatomic) BOOL shouldShowPluginButtons;                                                              //@synthesize shouldShowPluginButtons=_shouldShowPluginButtons - In the implementation block
@property (assign,nonatomic) BOOL shouldShowCharacterCount;                                                             //@synthesize shouldShowCharacterCount=_shouldShowCharacterCount - In the implementation block
@property (nonatomic,retain) CKMessageEntryContentView * contentView;                                                   //@synthesize contentView=_contentView - In the implementation block
@property (nonatomic,retain) CKEntryViewButton * photoButton;                                                           //@synthesize photoButton=_photoButton - In the implementation block
@property (nonatomic,retain) UIView * inputButtonContainerView;                                                         //@synthesize inputButtonContainerView=_inputButtonContainerView - In the implementation block
@property (nonatomic,retain) UIView * buttonAndTextAreaContainerView;                                                   //@synthesize buttonAndTextAreaContainerView=_buttonAndTextAreaContainerView - In the implementation block
@property (nonatomic,retain) CKEntryViewButton * sendButton;                                                            //@synthesize sendButton=_sendButton - In the implementation block
@property (nonatomic,retain) CKEntryViewButton * browserButton;                                                         //@synthesize browserButton=_browserButton - In the implementation block
@property (nonatomic,retain) CKEntryViewButton * cancelButton;                                                          //@synthesize cancelButton=_cancelButton - In the implementation block
@property (nonatomic,retain) CKEntryViewButton * stopButton;                                                            //@synthesize stopButton=_stopButton - In the implementation block
@property (nonatomic,retain) CKEntryViewButton * arrowButton;                                                           //@synthesize arrowButton=_arrowButton - In the implementation block
@property (nonatomic,retain) CKEntryViewButton * sendAudioButton;                                                       //@synthesize sendAudioButton=_sendAudioButton - In the implementation block
@property (nonatomic,retain) _UIClickInteraction * sendButtonClickInteraction;                                          //@synthesize sendButtonClickInteraction=_sendButtonClickInteraction - In the implementation block
@property (nonatomic,retain) CKEntryViewButton * audioButton;                                                           //@synthesize audioButton=_audioButton - In the implementation block
@property (nonatomic,retain) CKActionMenuGestureRecognizerButton * audioActionMenuGestureRecognizerButton;              //@synthesize audioActionMenuGestureRecognizerButton=_audioActionMenuGestureRecognizerButton - In the implementation block
@property (nonatomic,retain) CKInlineAudioReplyButtonController * audioReplyButton;                                     //@synthesize audioReplyButton=_audioReplyButton - In the implementation block
@property (nonatomic,retain) UILabel * characterCountLabel;                                                             //@synthesize characterCountLabel=_characterCountLabel - In the implementation block
@property (assign,nonatomic) CGSize inputButtonSize;                                                                    //@synthesize inputButtonSize=_inputButtonSize - In the implementation block
@property (assign,nonatomic) CGSize sendButtonSize;                                                                     //@synthesize sendButtonSize=_sendButtonSize - In the implementation block
@property (assign,nonatomic) CGSize characterCountSize;                                                                 //@synthesize characterCountSize=_characterCountSize - In the implementation block
@property (nonatomic,retain) UIVisualEffectView * backgroundView;                                                       //@synthesize backgroundView=_backgroundView - In the implementation block
@property (nonatomic,retain) UIVisualEffectView * knockoutView;                                                         //@synthesize knockoutView=_knockoutView - In the implementation block
@property (nonatomic,retain) UIView * knockoutCoverView;                                                                //@synthesize knockoutCoverView=_knockoutCoverView - In the implementation block
@property (assign,getter=isCharacterCountHidden,nonatomic) BOOL characterCountHidden;                                   //@synthesize characterCountHidden=_characterCountHidden - In the implementation block
@property (assign,nonatomic) BOOL shouldCenterCharacterCount;                                                           //@synthesize shouldCenterCharacterCount=_shouldCenterCharacterCount - In the implementation block
@property (assign,nonatomic) BOOL shouldAllowImpactSend;                                                                //@synthesize shouldAllowImpactSend=_shouldAllowImpactSend - In the implementation block
@property (nonatomic,retain) CKAudioRecorder * recorder;                                                                //@synthesize recorder=_recorder - In the implementation block
@property (nonatomic,retain) CKComposition * audioComposition;                                                          //@synthesize audioComposition=_audioComposition - In the implementation block
@property (nonatomic,retain) CKActionMenuController * audioActionMenuController;                                        //@synthesize audioActionMenuController=_audioActionMenuController - In the implementation block
@property (assign,nonatomic) CGRect audioActionMenuFrame;                                                               //@synthesize audioActionMenuFrame=_audioActionMenuFrame - In the implementation block
@property (nonatomic,retain) CKMessageEntryWaveformView * waveformView;                                                 //@synthesize waveformView=_waveformView - In the implementation block
@property (nonatomic,retain) CKMessageEntryRecordedAudioView * recordedAudioView;                                       //@synthesize recordedAudioView=_recordedAudioView - In the implementation block
@property (assign,nonatomic) CGSize waveformViewSize;                                                                   //@synthesize waveformViewSize=_waveformViewSize - In the implementation block
@property (nonatomic,retain) CKMessageEntryAudioHintView * audioHintView;                                               //@synthesize audioHintView=_audioHintView - In the implementation block
@property (assign,nonatomic) unsigned long long displayMode;                                                            //@synthesize displayMode=_displayMode - In the implementation block
@property (nonatomic,retain) UIView * contentClipView;                                                                  //@synthesize contentClipView=_contentClipView - In the implementation block
@property (assign,getter=isPerformingActionMenuSend,nonatomic) BOOL performingActionMenuSend;                           //@synthesize performingActionMenuSend=_performingActionMenuSend - In the implementation block
@property (nonatomic,copy) NSArray * keyCommands;                                                                       //@synthesize keyCommands=_keyCommands - In the implementation block
@property (nonatomic,retain) UIInputContextHistory * inputContextHistory;                                               //@synthesize inputContextHistory=_inputContextHistory - In the implementation block
@property (nonatomic,readonly) BOOL shouldEntryViewBeExpandedLayout; 
@property (assign,nonatomic) BOOL animatingLayoutChange;                                                                //@synthesize animatingLayoutChange=_animatingLayoutChange - In the implementation block
@property (assign,nonatomic) BOOL isTransitioningForBrowserSwitcher;                                                    //@synthesize isTransitioningForBrowserSwitcher=_isTransitioningForBrowserSwitcher - In the implementation block
@property (nonatomic,retain) UILabel * collpasedPlaceholderLabel;                                                       //@synthesize collpasedPlaceholderLabel=_collpasedPlaceholderLabel - In the implementation block
@property (nonatomic,retain) CKBrowserSwitcherFooterView * appStrip;                                                    //@synthesize appStrip=_appStrip - In the implementation block
@property (nonatomic,retain) UIButton * emojiButton;                                                                    //@synthesize emojiButton=_emojiButton - In the implementation block
@property (nonatomic,retain) UIView * appStripBackgroundBlurContainerView;                                              //@synthesize appStripBackgroundBlurContainerView=_appStripBackgroundBlurContainerView - In the implementation block
@property (nonatomic,retain) UIKBVisualEffectView * appStripBackgroundBlurView;                                         //@synthesize appStripBackgroundBlurView=_appStripBackgroundBlurView - In the implementation block
@property (assign,nonatomic,__weak) id<UITextInputTraits_Private> lastConfiguredInputDelegate;                          //@synthesize lastConfiguredInputDelegate=_lastConfiguredInputDelegate - In the implementation block
@property (nonatomic,retain) CKPaddleOverlayView * paddleOverlayView;                                                   //@synthesize paddleOverlayView=_paddleOverlayView - In the implementation block
@property (nonatomic,retain) CKMentionSuggestionView * mentionSuggestionView;                                           //@synthesize mentionSuggestionView=_mentionSuggestionView - In the implementation block
@property (nonatomic,retain) NSArray * currentMentionSuggestions;                                                       //@synthesize currentMentionSuggestions=_currentMentionSuggestions - In the implementation block
@property (assign,nonatomic) BOOL showingMentionsSuggestions;                                                           //@synthesize showingMentionsSuggestions=_showingMentionsSuggestions - In the implementation block
@property (assign,nonatomic) BOOL isUpdatingMentionAttributedText;                                                      //@synthesize isUpdatingMentionAttributedText=_isUpdatingMentionAttributedText - In the implementation block
@property (nonatomic,retain) NSMutableSet * entityHandles;                                                              //@synthesize entityHandles=_entityHandles - In the implementation block
@property (nonatomic,retain) NSMutableSet * recipientNames;                                                             //@synthesize recipientNames=_recipientNames - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * entityDictionary;                                                    //@synthesize entityDictionary=_entityDictionary - In the implementation block
@property (assign,nonatomic) NSRange rangeOfTappedMention;                                                              //@synthesize rangeOfTappedMention=_rangeOfTappedMention - In the implementation block
@property (nonatomic,retain) CKMentionEntityNode * entityTree;                                                          //@synthesize entityTree=_entityTree - In the implementation block
@property (assign,nonatomic) BOOL languageHasSpaces;                                                                    //@synthesize languageHasSpaces=_languageHasSpaces - In the implementation block
@property (nonatomic,retain) CAMShutterButton * shutterButton;                                                          //@synthesize shutterButton=_shutterButton - In the implementation block
@property (nonatomic,retain) CKScheduledUpdater * entryFieldCollapsedUpdater;                                           //@synthesize entryFieldCollapsedUpdater=_entryFieldCollapsedUpdater - In the implementation block
@property (assign,nonatomic) BOOL entryFieldUpdaterCollapsedValue;                                                      //@synthesize entryFieldUpdaterCollapsedValue=_entryFieldUpdaterCollapsedValue - In the implementation block
@property (assign,nonatomic) BOOL entryFieldUpdaterAnimatedValue;                                                       //@synthesize entryFieldUpdaterAnimatedValue=_entryFieldUpdaterAnimatedValue - In the implementation block
@property (nonatomic,retain) UISwipeGestureRecognizer * swipeGestureRecognizer;                                         //@synthesize swipeGestureRecognizer=_swipeGestureRecognizer - In the implementation block
@property (assign,nonatomic) UIEdgeInsets marginInsets;                                                                 //@synthesize marginInsets=_marginInsets - In the implementation block
@property (nonatomic,copy) NSString * backdropGroupName;                                                                //@synthesize backdropGroupName=_backdropGroupName - In the implementation block
@property (readonly) double coverViewWidth; 
@property (assign,nonatomic,__weak) id<CKMessageEntryViewDelegate> delegate;                                            //@synthesize delegate=_delegate - In the implementation block
@property (assign,nonatomic,__weak) id<_UIClickInteractionDelegate> clickInteractionDelegate;                           //@synthesize clickInteractionDelegate=_clickInteractionDelegate - In the implementation block
@property (assign,nonatomic,__weak) id<CKMessageEntryViewInputDelegate> inputDelegate;                                  //@synthesize inputDelegate=_inputDelegate - In the implementation block
@property (nonatomic,retain) CKConversation * conversation;                                                             //@synthesize conversation=_conversation - In the implementation block
@property (nonatomic,retain) CKComposition * composition; 
@property (nonatomic,readonly) CKComposition * compositionWithAcceptedAutocorrection; 
@property (assign,nonatomic) BOOL shouldOpaqueBackgroundView; 
@property (assign,getter=isKeyboardVisible,nonatomic) BOOL keyboardVisible;                                             //@synthesize keyboardVisible=_keyboardVisible - In the implementation block
@property (getter=isRecording,nonatomic,readonly) BOOL recording; 
@property (nonatomic,readonly) BOOL hasRecording; 
@property (nonatomic,retain) UITraitCollection * entryViewTraitCollection;                                              //@synthesize entryViewTraitCollection=_entryViewTraitCollection - In the implementation block
@property (assign,nonatomic) BOOL entryFieldCollapsed;                                                                  //@synthesize entryFieldCollapsed=_entryFieldCollapsed - In the implementation block
@property (nonatomic,readonly) BOOL shouldShowAppStrip; 
@property (nonatomic,readonly) BOOL showsKeyboardPredictionBar; 
@property (assign,nonatomic) BOOL extendAppStripBlurToKeyplaneTop;                                                      //@synthesize extendAppStripBlurToKeyplaneTop=_extendAppStripBlurToKeyplaneTop - In the implementation block
@property (assign,getter=shouldDisablePluginButtons,nonatomic) BOOL disablePluginButtons;                               //@synthesize disablePluginButtons=_disablePluginButtons - In the implementation block
@property (assign,getter=isComposingRecipient,nonatomic) BOOL composingRecipient;                                       //@synthesize composingRecipient=_composingRecipient - In the implementation block
@property (assign,getter=hasFailedRecipients,nonatomic) BOOL failedRecipients;                                          //@synthesize failedRecipients=_failedRecipients - In the implementation block
@property (assign,getter=hasUnreachableEmergencyRecipient,nonatomic) BOOL unreachableEmergencyRecipient;                //@synthesize unreachableEmergencyRecipient=_unreachableEmergencyRecipient - In the implementation block
@property (assign,getter=isSendingMessage,nonatomic) BOOL sendingMessage;                                               //@synthesize sendingMessage=_sendingMessage - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (assign,nonatomic) long long style;                                                                           //@synthesize style=_style - In the implementation block
+(UIEdgeInsets)coverViewInsetsForMarginInsets:(UIEdgeInsets)arg1 shouldShowPluginButtons:(BOOL)arg2 shouldShowCharacterCount:(BOOL)arg3 shouldCenterCharacterCount:(BOOL*)arg4 ;
+(void)configureAttributedString:(id)arg1 inTextView:(id)arg2 forDirectMentionInRange:(NSRange)arg3 forChildNode:(id)arg4 addingVisualStyling:(BOOL)arg5 shouldAddAutoComplete:(BOOL)arg6 ;
+(void)configureAttributedString:(id)arg1 inTextView:(id)arg2 boldingFont:(BOOL)arg3 inRange:(NSRange)arg4 ;
+(BOOL)isValidPostfixCharacter:(unsigned short)arg1 ;
+(void)configureAttributedString:(id)arg1 withFontColor:(id)arg2 forRange:(NSRange)arg3 ;
+(void)configureAttributedString:(id)arg1 withParagraphStyleInTextView:(id)arg2 inRange:(NSRange)arg3 ;
+(void)configureAttributedString:(id)arg1 inTextView:(id)arg2 forUnconfirmedDirectMention:(id)arg3 inRange:(NSRange)arg4 addingVisualStyling:(BOOL)arg5 ;
+(void)configureAttributedString:(id)arg1 automaticMentionAttributeWithOriginalText:(id)arg2 entityNode:(id)arg3 forRange:(NSRange)arg4 ;
+(void)configureAttributedString:(id)arg1 inTextView:(id)arg2 forNoMentionInRange:(NSRange)arg3 ;
+(void)hideMentionsInAttributedString:(id)arg1 inTextView:(id)arg2 ;
+(void)configureAttributedStringForMentionsChecking:(id)arg1 ;
+(NSRange)range:(NSRange)arg1 appendingSubstringRange:(NSRange)arg2 ;
+(BOOL)range:(NSRange)arg1 isPrefixedWithAtForString:(id)arg2 ;
+(BOOL)range:(NSRange)arg1 containsEmptySelectedRange:(NSRange)arg2 ;
+(void)configureAttributedString:(id)arg1 inTextView:(id)arg2 forUnconfirmedMentionInRange:(NSRange)arg3 ;
+(void)configureAttributedString:(id)arg1 inTextView:(id)arg2 forConfirmedMentionInRange:(NSRange)arg3 needingAnimation:(BOOL)arg4 ;
+(void)removeMentionsAtIndex:(long long)arg1 onAttributedString:(id)arg2 inTextView:(id)arg3 ;
+(BOOL)attributedString:(id)arg1 containsConfirmedMentionInRange:(NSRange)arg2 ;
+(void)replaceAttributedString:(id)arg1 withEntity:(id)arg2 fromInputText:(id)arg3 inRange:(NSRange)arg4 updatingRange:(NSRange*)arg5 ;
+(void)configureAttributedString:(id)arg1 inTextView:(id)arg2 withOriginalText:(id)arg3 inRange:(NSRange)arg4 ;
+(BOOL)range:(NSRange)arg1 hasValidPostfixCharacterForString:(id)arg2 ;
+(id)sharedAppStripDatasource;
+(UIEdgeInsets)coverViewInsetsForMarginInsets:(UIEdgeInsets)arg1 shouldShowPluginButtons:(BOOL)arg2 shouldShowCharacterCount:(BOOL)arg3 ;
+(id)languagesWithoutSpaces;
+(id)audioButtonImage;
+(UIEdgeInsets)contentViewInsetsForMarginInsets:(UIEdgeInsets)arg1 shouldShowPluginButtons:(BOOL)arg2 shouldShowCharacterCount:(BOOL)arg3 shouldCoverSendButton:(BOOL)arg4 ;
-(id<CKMessageEntryViewInputDelegate>)inputDelegate;
-(UIEdgeInsets)safeAreaInsets;
-(CKEntryViewButton *)cancelButton;
-(BOOL)isRecording;
-(void)setCancelButton:(CKEntryViewButton *)arg1 ;
-(id)initWithFrame:(CGRect)arg1 marginInsets:(UIEdgeInsets)arg2 shouldAllowImpact:(BOOL)arg3 shouldShowSendButton:(BOOL)arg4 shouldShowSubject:(BOOL)arg5 shouldShowPluginButtons:(BOOL)arg6 shouldShowCharacterCount:(BOOL)arg7 traitCollection:(id)arg8 ;
-(BOOL)isKeyboardVisible;
-(id)initWithFrame:(CGRect)arg1 marginInsets:(UIEdgeInsets)arg2 shouldShowSendButton:(BOOL)arg3 shouldShowSubject:(BOOL)arg4 shouldShowPluginButtons:(BOOL)arg5 shouldShowCharacterCount:(BOOL)arg6 traitCollection:(id)arg7 ;
-(NSArray *)keyCommands;
-(void)_localeChanged;
-(id<CKMessageEntryViewDelegate>)delegate;
-(void)setBackgroundView:(UIVisualEffectView *)arg1 ;
-(void)_dynamicUserInterfaceTraitDidChange;
-(UIVisualEffectView *)backgroundView;
-(void)setShutterButton:(CAMShutterButton *)arg1 ;
-(void)setRecipientNames:(NSMutableSet *)arg1 ;
-(void)setRecorder:(CKAudioRecorder *)arg1 ;
-(id)hitTest:(CGPoint)arg1 withEvent:(id)arg2 ;
-(void)setKeyCommands:(NSArray *)arg1 ;
-(void)setConversation:(CKConversation *)arg1 ;
-(CKComposition *)composition;
-(CAMShutterButton *)shutterButton;
-(unsigned long long)displayMode;
-(void)setInputDelegate:(id<CKMessageEntryViewInputDelegate>)arg1 ;
-(UIInputContextHistory *)inputContextHistory;
-(void)handleLongPress:(id)arg1 ;
-(void)setDelegate:(id<CKMessageEntryViewDelegate>)arg1 ;
-(CKEntryViewButton *)arrowButton;
-(void)setArrowButton:(CKEntryViewButton *)arg1 ;
-(CKConversation *)conversation;
-(void)layoutSubviews;
-(void)setFrame:(CGRect)arg1 ;
-(void)deferredSetup;
-(void)actionMenuGestureRecognizerButtonDidTouchDownButton:(id)arg1 ;
-(BOOL)actionMenuGestureRecognizerButtonShouldShowHint:(id)arg1 ;
-(void)actionMenuGestureRecognizerButtonShowHint:(id)arg1 ;
-(void)actionMenuGestureRecognizerButtonDidTouchUpInsideButton:(id)arg1 ;
-(BOOL)actionMenuGestureRecognizerButtonIsShowingHint:(id)arg1 ;
-(BOOL)actionMenuGestureRecognizerButtonShouldRecognizeGesture:(id)arg1 ;
-(void)actionMenuGestureRecognizerButtonGestureDidEnd:(id)arg1 ;
-(void)actionMenuGestureRecognizerButtonGestureDidBegin:(id)arg1 ;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(CKMentionEntityNode *)entityTree;
-(CKEntryViewButton *)sendButton;
-(BOOL)shouldShowSubject;
-(void)setContentView:(CKMessageEntryContentView *)arg1 ;
-(NSString *)backdropGroupName;
-(CKBrowserSwitcherFooterView *)appStrip;
-(void)cancelButtonTapped:(id)arg1 ;
-(CGRect)anchorRect;
-(NSMutableSet *)entityHandles;
-(CKAudioRecorder *)recorder;
-(CKEntryViewButton *)stopButton;
-(BOOL)isValidPrefixCharacter:(unsigned short)arg1 ;
-(BOOL)allowsMentions;
-(id)entitiesForKey:(id)arg1 ;
-(BOOL)languageHasSpaces;
-(CKMentionSuggestionView *)mentionSuggestionView;
-(UIView *)contentClipView;
-(void)checkForMentionsInAttributedString:(id)arg1 inTextView:(id)arg2 ;
-(BOOL)isUpdatingMentionAttributedText;
-(void)updateTextViewIfNecessary:(id)arg1 withAttributedString:(id)arg2 ;
-(void)setEntityTree:(CKMentionEntityNode *)arg1 ;
-(void)setRangeOfTappedMention:(NSRange)arg1 ;
-(void)setDisplayMode:(unsigned long long)arg1 ;
-(BOOL)range:(NSRange)arg1 hasValidPrefixCharacterForString:(id)arg2 ;
-(void)setCurrentMentionSuggestions:(NSArray *)arg1 ;
-(BOOL)attributedString:(id)arg1 shouldAddAutoCompleteAttributeForRange:(NSRange)arg2 ;
-(void)setIsUpdatingMentionAttributedText:(BOOL)arg1 ;
-(void)confirmAutomaticMention:(id)arg1 inTextView:(id)arg2 selectedRange:(NSRange*)arg3 ;
-(void)updateTextViewIfNecessary:(id)arg1 withAttributedString:(id)arg2 selectedRange:(NSRange)arg3 ;
-(void)updateTypingAttributesIfNeededForTextView:(id)arg1 ;
-(void)setShowMentionSuggestions:(BOOL)arg1 animated:(BOOL)arg2 completion:(/*^block*/id)arg3 ;
-(void)replaceAttributedText:(id)arg1 inTextView:(id)arg2 atIndex:(unsigned long long)arg3 updatedSelectedRange:(NSRange*)arg4 replacementRange:(NSRange*)arg5 ;
-(NSRange)rangeOfTappedMention;
-(BOOL)shouldUpdateMentionsInTextView:(id)arg1 inRange:(NSRange)arg2 withReplacementText:(id)arg3 ;
-(void)updateTextInputContext;
-(void)setEntityDictionary:(NSMutableDictionary *)arg1 ;
-(void)configureAttributedString:(id)arg1 inTextView:(id)arg2 forMentionOverrideInRange:(NSRange)arg3 shouldOverride:(BOOL)arg4 ;
-(void)checkForMentions;
-(void)updateMentionsAssociations;
-(void)confirmAutomaticMention:(id)arg1 inTextView:(id)arg2 isSending:(BOOL)arg3 selectedRange:(NSRange*)arg4 ;
-(void)associateEntity:(id)arg1 withKey:(id)arg2 ;
-(BOOL)attributedString:(id)arg1 nextCharacterRangeFromRange:(NSRange)arg2 containsPossibleChild:(id)arg3 ;
-(void)setEntityHandles:(NSMutableSet *)arg1 ;
-(NSMutableDictionary *)entityDictionary;
-(void)didFinishAnimatingMentionWithAnimationIdentifier:(id)arg1 ;
-(void)didTapMention:(id)arg1 characterIndex:(double)arg2 ;
-(BOOL)shouldUpdateMentionsForEntryContentViewWillChangeText:(id)arg1 inRange:(NSRange)arg2 withReplacementText:(id)arg3 ;
-(void)insertMentionByName:(id)arg1 ;
-(void)suggestionViewDidSelectEntity:(id)arg1 ;
-(void)acceptAutomaticMentionConfirmation;
-(void)reloadMentionsData;
-(void)safeAreaInsetsDidChange;
-(void)setInputContextHistory:(UIInputContextHistory *)arg1 ;
-(UIEdgeInsets)marginInsets;
-(BOOL)hasUnreachableEmergencyRecipient;
-(NSMutableSet *)recipientNames;
-(void)setStyle:(long long)arg1 ;
-(void)setMarginInsets:(UIEdgeInsets)arg1 ;
-(void)setBackdropGroupName:(NSString *)arg1 ;
-(void)setContentClipView:(UIView *)arg1 ;
-(CKEntryViewButton *)photoButton;
-(CKMessageEntryContentView *)contentView;
-(UIVisualEffectView *)knockoutView;
-(_UIClickInteraction *)sendButtonClickInteraction;
-(void)setSendButtonClickInteraction:(_UIClickInteraction *)arg1 ;
-(UIView *)buttonAndTextAreaContainerView;
-(BOOL)shouldShowPluginButtons;
-(BOOL)shouldEntryViewBeExpandedLayout;
-(CGRect)coverFrameThatFitsInSize:(CGSize)arg1 ;
-(CKMessageEntryAudioHintView *)audioHintView;
-(UIEdgeInsets)adjustedCoverInsets;
-(UIView *)inputButtonContainerView;
-(double)bottomInsetForAppStrip;
-(CGSize)inputButtonSize;
-(CKEntryViewButton *)browserButton;
-(BOOL)shouldShowSendButton;
-(CGSize)sendButtonSize;
-(BOOL)shouldShowCharacterCount;
-(CGSize)characterCountSize;
-(BOOL)shouldCenterCharacterCount;
-(UIView *)knockoutCoverView;
-(UILabel *)collpasedPlaceholderLabel;
-(void)setSendingMessage:(BOOL)arg1 ;
-(BOOL)entryFieldCollapsed;
-(CKEntryViewButton *)audioButton;
-(void)updateTextViewsForShouldHideCaret:(BOOL)arg1 ;
-(UILabel *)characterCountLabel;
-(BOOL)isCharacterCountHidden;
-(CGSize)waveformViewSize;
-(BOOL)isAudioActionMenuVisible;
-(CGRect)audioActionMenuFrame;
-(CKMessageEntryWaveformView *)waveformView;
-(CKMessageEntryRecordedAudioView *)recordedAudioView;
-(UIButton *)emojiButton;
-(void)updateAppStripFrame;
-(void)configureAppStripOrMentionSuggestionsIfNeeded;
-(BOOL)shouldShowAppStrip;
-(UIView *)appStripBackgroundBlurContainerView;
-(void)configureAppStripBackgroundViewsIfNecessary;
-(BOOL)shouldShowMentionSuggestions;
-(void)updateAppsMenu:(id)arg1 ;
-(void)setAppStripBackgroundBlurContainerView:(UIView *)arg1 ;
-(void)updateEntryView;
-(void)setAppStripBackgroundBlurView:(UIKBVisualEffectView *)arg1 ;
-(void)_overrideUserInterfaceStyleForEntryViewStyleIfNeeded:(long long)arg1 ;
-(CKEntryViewButton *)sendAudioButton;
-(void)setEntryViewTraitCollection:(id)arg1 resetStyle:(BOOL)arg2 ;
-(BOOL)isRunningInNotificationExtension;
-(void)_setupWaveformView;
-(BOOL)hasRecording;
-(void)loadRecordedAudioViewsIfNeeded;
-(CKComposition *)audioComposition;
-(void)setCoverInsets:(UIEdgeInsets)arg1 ;
-(void)setIsTransitioningForBrowserSwitcher:(BOOL)arg1 ;
-(UIKBVisualEffectView *)appStripBackgroundBlurView;
-(UIEdgeInsets)coverInsets;
-(BOOL)isSendingMessage;
-(void)setShouldCenterCharacterCount:(BOOL)arg1 ;
-(void)_updateUIForEntryFieldCollapsedStateChange;
-(void)setEntryFieldCollapsedUpdater:(CKScheduledUpdater *)arg1 ;
-(CKScheduledUpdater *)entryFieldCollapsedUpdater;
-(void)setButtonAndTextAreaContainerView:(UIView *)arg1 ;
-(void)setShouldShowSendButton:(BOOL)arg1 ;
-(void)setShouldShowSubject:(BOOL)arg1 ;
-(void)setShouldShowPluginButtons:(BOOL)arg1 ;
-(void)setShouldShowCharacterCount:(BOOL)arg1 ;
-(void)setShouldAllowImpactSend:(BOOL)arg1 ;
-(void)_setBehaviorsForCurrentTransparencySetting;
-(void)textEffectsWindowOffsetDidChange:(id)arg1 ;
-(void)updateBackgroundView;
-(void)setKnockoutCoverView:(UIView *)arg1 ;
-(void)setInputButtonContainerView:(UIView *)arg1 ;
-(void)setInputButtonSize:(CGSize)arg1 ;
-(void)photoButtonTouchDown:(id)arg1 ;
-(void)photoButtonTouchUpOutside:(id)arg1 ;
-(void)photoButtonTapped:(id)arg1 ;
-(void)setSendButton:(CKEntryViewButton *)arg1 ;
-(void)setPhotoButton:(CKEntryViewButton *)arg1 ;
-(void)browserButtonTapped:(id)arg1 ;
-(UITraitCollection *)entryViewTraitCollection;
-(void)setBrowserButton:(CKEntryViewButton *)arg1 ;
-(void)arrowButtonTapped:(id)arg1 ;
-(void)collapseGestureRecognized;
-(void)updateKnockoutView;
-(void)setCharacterCountLabel:(UILabel *)arg1 ;
-(void)expandGestureRecongnized;
-(void)setCollpasedPlaceholderLabel:(UILabel *)arg1 ;
-(void)collapsedPlaceholderLabelTapped:(id)arg1 ;
-(void)configureForDisplayMode:(unsigned long long)arg1 ;
-(void)setAudioButton:(CKEntryViewButton *)arg1 ;
-(void)setCharacterCountSize:(CGSize)arg1 ;
-(void)setCharacterCountHidden:(BOOL)arg1 ;
-(void)setAudioReplyButton:(CKInlineAudioReplyButtonController *)arg1 ;
-(void)touchUpInsideSendButton:(id)arg1 ;
-(void)setAudioActionMenuGestureRecognizerButton:(CKActionMenuGestureRecognizerButton *)arg1 ;
-(void)setSendButtonSize:(CGSize)arg1 ;
-(void)setEmojiButton:(UIButton *)arg1 ;
-(void)audioButtonTapped:(id)arg1 ;
-(void)stopButtonTapped:(id)arg1 ;
-(void)setStopButton:(CKEntryViewButton *)arg1 ;
-(void)keyCommandSend:(id)arg1 ;
-(void)keyCommandAppMenu:(id)arg1 ;
-(void)optionUpArrowClicked:(id)arg1 ;
-(BOOL)_isRunningInMVS;
-(void)optionDownArrowClicked:(id)arg1 ;
-(void)setEntryViewTraitCollection:(UITraitCollection *)arg1 ;
-(void)setEntryFieldCollapsed:(BOOL)arg1 animated:(BOOL)arg2 ;
-(void)showEffectPicker;
-(void)_swipeDownGestureRecognized:(id)arg1 ;
-(void)setSwipeGestureRecognizer:(UISwipeGestureRecognizer *)arg1 ;
-(id)_currentInputDelegate;
-(void)setKnockoutView:(UIVisualEffectView *)arg1 ;
-(void)messageReceived:(id)arg1 ;
-(void)conversationPreferredServiceChanged:(id)arg1 ;
-(void)_participantsDidChange:(id)arg1 ;
-(void)_contactLimitsChanged:(id)arg1 ;
-(void)setAudioComposition:(CKComposition *)arg1 ;
-(void)_initializeInputContextHistory;
-(CKActionMenuController *)audioActionMenuController;
-(BOOL)layoutIsCurrentlyCompact;
-(void)setEntryFieldUpdaterCollapsedValue:(BOOL)arg1 ;
-(void)setEntryFieldUpdaterAnimatedValue:(BOOL)arg1 ;
-(id<UITextInputTraits_Private>)lastConfiguredInputDelegate;
-(void)setLastConfiguredInputDelegate:(id<UITextInputTraits_Private>)arg1 ;
-(BOOL)showingMentionsSuggestions;
-(void)setShowingMentionsSuggestions:(BOOL)arg1 ;
-(CKPaddleOverlayView *)paddleOverlayView;
-(void)selectPluginAtIndexPath:(id)arg1 ;
-(BOOL)entryFieldUpdaterAnimatedValue;
-(BOOL)entryFieldUpdaterCollapsedValue;
-(CKComposition *)compositionWithAcceptedAutocorrection;
-(void)setEntryFieldCollapsed:(BOOL)arg1 ;
-(void)_animateToCompactLayoutCollapsing:(BOOL)arg1 completion:(/*^block*/id)arg2 ;
-(void)_animateExpandForManualToggle:(BOOL)arg1 completion:(/*^block*/id)arg2 ;
-(BOOL)animatingLayoutChange;
-(void)setAnimatingLayoutChange:(BOOL)arg1 ;
-(BOOL)_shouldNotAnimateCollapseInteractive;
-(void)setAppStrip:(CKBrowserSwitcherFooterView *)arg1 ;
-(void)minifyAppStrip;
-(void)setPerformingActionMenuSend:(BOOL)arg1 ;
-(void)_addMessageToInputContextHistory:(id)arg1 ;
-(NSArray *)currentMentionSuggestions;
-(BOOL)showsKeyboardPredictionBar;
-(BOOL)isPredictionBarEnabled;
-(void)handleContentViewChangeWithCompletion:(/*^block*/id)arg1 ;
-(BOOL)is3rdPartyKeyboardVisible;
-(BOOL)isTransitioningForBrowserSwitcher;
-(CKInlineAudioReplyButtonController *)audioReplyButton;
-(BOOL)isPerformingActionMenuSend;
-(void)setAudioActionMenuController:(CKActionMenuController *)arg1 ;
-(UISwipeGestureRecognizer *)swipeGestureRecognizer;
-(BOOL)shouldRecordForService:(id)arg1 ;
-(void)presentAudioActionMenu;
-(void)cancelRecordingAndShowAudioHint;
-(void)setWaveformView:(CKMessageEntryWaveformView *)arg1 ;
-(void)setWaveformViewSize:(CGSize)arg1 ;
-(void)presentAudioActionButtons;
-(void)_trackAudioMessageSentWithComposition:(id)arg1 ;
-(void)configureAudioActionMenuControllerForPlayback:(BOOL)arg1 ;
-(void)playMenuItemAction:(id)arg1 ;
-(void)pauseMenuItemAction:(id)arg1 ;
-(void)audioMenuItemAction:(id)arg1 ;
-(void)sendMenuItemAction:(id)arg1 ;
-(void)setAudioHintView:(CKMessageEntryAudioHintView *)arg1 ;
-(void)setAudioActionMenuFrame:(CGRect)arg1 ;
-(void)_trackAudioMessageRecordingStarted;
-(void)showHintWithText:(id)arg1 animatingReferenceButton:(BOOL)arg2 ;
-(void)startRecordingForRaiseGesture;
-(BOOL)sendButtonEnabled;
-(BOOL)shouldAllowSendWhenSendButtonDisabled;
-(char)_sendButtonColor;
-(BOOL)pluginButtonsEnabled;
-(BOOL)hasFailedRecipients;
-(BOOL)photoButtonEnabled;
-(BOOL)isComposingRecipient;
-(id<_UIClickInteractionDelegate>)clickInteractionDelegate;
-(BOOL)shouldAllowImpactSend;
-(BOOL)_isSURFInShelf;
-(BOOL)shouldDisablePluginButtons;
-(void)setRecordedAudioView:(CKMessageEntryRecordedAudioView *)arg1 ;
-(void)messageEntryContentViewDidReturn:(id)arg1 ;
-(void)messageEntryContentViewDidChange:(id)arg1 ;
-(BOOL)gestureRecognizer:(id)arg1 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)arg2 ;
-(void)messageEntryContentViewDidChangeSelection:(id)arg1 ;
-(void)messageEntryContentViewShelfDidChange:(id)arg1 ;
-(void)audioReplyButtonCancel:(id)arg1 ;
-(BOOL)messageEntryContentViewShouldBeginEditing:(id)arg1 ;
-(void)messageEntryContentViewDidBeginEditing:(id)arg1 wasAlreadyActive:(BOOL)arg2 ;
-(void)messageEntryContentViewDidEndEditing:(id)arg1 ;
-(BOOL)messageEntryContentView:(id)arg1 shouldInsertMediaObjects:(id)arg2 ;
-(double)placeholderHeight;
-(CGSize)messageEntryContentViewMaxShelfPluginViewSize:(id)arg1 ;
-(void)messageEntryContentView:(id)arg1 didTapMediaObject:(id)arg2 ;
-(double)coverViewWidth;
-(void)messageEntryContentViewWasTapped:(id)arg1 isLongPress:(BOOL)arg2 ;
-(void)messageEntryContentView:(id)arg1 didPasteURL:(id)arg2 ;
-(void)audioReplyButtonStart:(id)arg1 ;
-(long long)style;
-(void)messageEntryContentViewDidTapHandwritingKey:(id)arg1 ;
-(void)messageEntryContentViewCancelWasTapped:(id)arg1 shelfPluginPayload:(id)arg2 ;
-(void)messageEntryContentView:(id)arg1 didStagePluginPayload:(id)arg2 ;
-(void)messageEntryContentViewDidTapMention:(id)arg1 characterIndex:(double)arg2 ;
-(BOOL)messageEntryContentViewWillChangeText:(id)arg1 inRange:(NSRange)arg2 withReplacementText:(id)arg3 ;
-(void)audioRecorderRecordingDidChange:(id)arg1 ;
-(void)audioRecorderRecordingDidFail:(id)arg1 ;
-(void)audioRecorderDidUpdateAveragePower:(float)arg1 ;
-(void)switcherView:(id)arg1 didSelectPluginAtIndex:(id)arg2 ;
-(void)actionMenuControllerWillPresentActionMenu:(id)arg1 animated:(BOOL)arg2 ;
-(void)actionMenuControllerWillDismissActionMenu:(id)arg1 animated:(BOOL)arg2 ;
-(void)setComposition:(CKComposition *)arg1 ;
-(void)actionMenuControllerDidDismissActionMenu:(id)arg1 ;
-(void)audioReplyButtonStop:(id)arg1 ;
-(void)messageEntryRecordedAudioView:(id)arg1 mediaObjectDidFinishPlaying:(id)arg2 ;
-(void)messageEntryRecordedAudioViewPressedDelete:(id)arg1 ;
-(void)messageEntryRecordedAudioViewPressedPlay:(id)arg1 ;
-(void)messageEntryRecordedAudioViewPressedPause:(id)arg1 ;
-(void)setKeyboardVisible:(BOOL)arg1 ;
-(void)switcherView:(id)arg1 didMagnify:(BOOL)arg2 ;
-(id)suggestionView:(id)arg1 entityAtIndex:(unsigned long long)arg2 ;
-(unsigned long long)numberOfSuggestionsInSuggestionView:(id)arg1 forSection:(unsigned long long)arg2 ;
-(id)suggestionView:(id)arg1 indexPathOfEntityWithIdentifier:(id)arg2 ;
-(void)suggestionView:(id)arg1 didSelectEntity:(id)arg2 ;
-(void)didDismissPaddleOverlayView:(id)arg1 ;
-(void)finishBrowserSwitcherCompactTransition;
-(void)layoutManagerDidFinishAnimatingMentionWithAnimationIdentifier:(id)arg1 ;
-(void)appSelectionInterfaceSelectedItem:(id)arg1 ;
-(void)prepareForBrowserSwitcherCompactTransitionIsSnapshotting:(BOOL)arg1 ;
-(CGRect)sendButtonFrameInScreenCoordinates;
-(CGPoint)sendButtonConvertPointToScreen:(CGPoint)arg1 ;
-(CGRect)activeKeyboardHeight;
-(void)setShouldHideBackgroundView:(BOOL)arg1 ;
-(CGRect)browserButtonFrame;
-(BOOL)shouldHideBackgroundView;
-(void)setShouldOpaqueBackgroundView:(BOOL)arg1 ;
-(BOOL)shouldOpaqueBackgroundView;
-(void)clearAppStripSelection;
-(void)dismissAudioActionMenuAnimated:(BOOL)arg1 ;
-(void)setShowAppStrip:(BOOL)arg1 animated:(BOOL)arg2 completion:(/*^block*/id)arg3 ;
-(id)pasteBoardTextFromComposition:(id)arg1 ;
-(id)snapshotForCompactBrowserAnimation;
-(void)beginDeferringEntryFieldCollapsedStateChanges;
-(void)setDisablePluginButtons:(BOOL)arg1 ;
-(void)endDeferringEntryFieldCollapsedStateChanges;
-(void)setComposingRecipient:(BOOL)arg1 ;
-(void)setFailedRecipients:(BOOL)arg1 ;
-(void)setUnreachableEmergencyRecipient:(BOOL)arg1 ;
-(void)sendAudioButtonTapped:(id)arg1 ;
-(double)_accessoryViewFadeDuration;
-(void)setLanguageHasSpaces:(BOOL)arg1 ;
-(void)showMessageEffectsHint;
-(void)stopRecordingForRaiseGestureWithFailure:(BOOL)arg1 ;
-(void)sendCurrentLocationMessage;
-(void)setClickInteractionDelegate:(id<_UIClickInteractionDelegate>)arg1 ;
-(BOOL)extendAppStripBlurToKeyplaneTop;
-(void)setExtendAppStripBlurToKeyplaneTop:(BOOL)arg1 ;
-(void)setSendAudioButton:(CKEntryViewButton *)arg1 ;
-(CKActionMenuGestureRecognizerButton *)audioActionMenuGestureRecognizerButton;
-(void)setPaddleOverlayView:(CKPaddleOverlayView *)arg1 ;
-(void)dealloc;
-(void)setMentionSuggestionView:(CKMentionSuggestionView *)arg1 ;
@end
