/*
* Generated on Thursday, January 14, 2021 at 2:24:36 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/PencilKit.framework/PencilKit
*/

#import <PencilKit/PencilKit-Structs.h>
#import <libobjc.A.dylib/PKPaletteHostingWindowScene.h>
#import <libobjc.A.dylib/PKPaletteFloatingKeyboardControllerDelegate.h>
#import <UIKit/UIPopoverPresentationControllerDelegate.h>
#import <libobjc.A.dylib/PKPaletteMoreOptionsViewControllerDelegate.h>

@protocol PKPaletteControllerDelegate;
@class PKTextInputWindowFirstResponder, PKPaletteTapToRadarCommand, PKPaletteHostView, PKUCBPaletteView, NSLayoutConstraint, PKPaletteButton, PKPaletteKeyboardButton, NSArray, PKPaletteFloatingKeyboardController, PKPaletteInputAssistantButtonProvider, NSString;

@interface PKPaletteController : NSObject <PKPaletteHostingWindowScene, PKPaletteFloatingKeyboardControllerDelegate, UIPopoverPresentationControllerDelegate, PKPaletteMoreOptionsViewControllerDelegate> {

	id<PKPaletteControllerDelegate> _delegate;
	PKTextInputWindowFirstResponder* _firstResponder;
	PKPaletteTapToRadarCommand* _tapToRadarCommand;
	PKPaletteHostView* __hostView;
	PKUCBPaletteView* __paletteView;
	NSLayoutConstraint* _paletteHostViewWidthConstraint;
	NSLayoutConstraint* _paletteHostViewHeightConstraint;
	PKPaletteButton* _undoButton;
	PKPaletteButton* _redoButton;
	PKPaletteButton* _returnKeyButton;
	PKPaletteKeyboardButton* _keyboardButton;
	NSArray* _trailingButtonsWithReturnKey;
	NSArray* _trailingButtonsWithoutReturnKey;
	PKPaletteFloatingKeyboardController* _floatingKeyboardController;
	PKPaletteInputAssistantButtonProvider* _inputAssistantButtonProvider;
	CGRect _adjustedWindowSceneBounds;

}

@property (nonatomic,retain) PKPaletteHostView * _hostView;                                                     //@synthesize _hostView=__hostView - In the implementation block
@property (nonatomic,retain) PKUCBPaletteView * _paletteView;                                                   //@synthesize _paletteView=__paletteView - In the implementation block
@property (nonatomic,retain) NSLayoutConstraint * paletteHostViewWidthConstraint;                               //@synthesize paletteHostViewWidthConstraint=_paletteHostViewWidthConstraint - In the implementation block
@property (nonatomic,retain) NSLayoutConstraint * paletteHostViewHeightConstraint;                              //@synthesize paletteHostViewHeightConstraint=_paletteHostViewHeightConstraint - In the implementation block
@property (nonatomic,retain) PKPaletteButton * undoButton;                                                      //@synthesize undoButton=_undoButton - In the implementation block
@property (nonatomic,retain) PKPaletteButton * redoButton;                                                      //@synthesize redoButton=_redoButton - In the implementation block
@property (nonatomic,retain) PKPaletteButton * returnKeyButton;                                                 //@synthesize returnKeyButton=_returnKeyButton - In the implementation block
@property (nonatomic,retain) PKPaletteKeyboardButton * keyboardButton;                                          //@synthesize keyboardButton=_keyboardButton - In the implementation block
@property (nonatomic,copy,readonly) NSArray * trailingButtonsWithReturnKey;                                     //@synthesize trailingButtonsWithReturnKey=_trailingButtonsWithReturnKey - In the implementation block
@property (nonatomic,copy,readonly) NSArray * trailingButtonsWithoutReturnKey;                                  //@synthesize trailingButtonsWithoutReturnKey=_trailingButtonsWithoutReturnKey - In the implementation block
@property (nonatomic,retain) PKPaletteFloatingKeyboardController * floatingKeyboardController;                  //@synthesize floatingKeyboardController=_floatingKeyboardController - In the implementation block
@property (nonatomic,retain) PKPaletteInputAssistantButtonProvider * inputAssistantButtonProvider;              //@synthesize inputAssistantButtonProvider=_inputAssistantButtonProvider - In the implementation block
@property (assign,nonatomic) CGRect adjustedWindowSceneBounds;                                                  //@synthesize adjustedWindowSceneBounds=_adjustedWindowSceneBounds - In the implementation block
@property (assign,nonatomic,__weak) id<PKPaletteControllerDelegate> delegate;                                   //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,readonly) long long palettePosition; 
@property (getter=isPaletteVisible,nonatomic,readonly) BOOL paletteVisible; 
@property (nonatomic,retain) PKTextInputWindowFirstResponder * firstResponder;                                  //@synthesize firstResponder=_firstResponder - In the implementation block
@property (nonatomic,retain) PKPaletteTapToRadarCommand * tapToRadarCommand;                                    //@synthesize tapToRadarCommand=_tapToRadarCommand - In the implementation block
@property (nonatomic,readonly) CGRect paletteHostingWindowSceneBounds; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)tearDown;
-(long long)adaptivePresentationStyleForPresentationController:(id)arg1 traitCollection:(id)arg2 ;
-(id)init;
-(long long)adaptivePresentationStyleForPresentationController:(id)arg1 ;
-(id<PKPaletteControllerDelegate>)delegate;
-(void)setDelegate:(id<PKPaletteControllerDelegate>)arg1 ;
-(PKPaletteHostView *)_hostView;
-(void)_handleReturn;
-(PKPaletteButton *)undoButton;
-(void)setUndoButton:(PKPaletteButton *)arg1 ;
-(PKTextInputWindowFirstResponder *)firstResponder;
-(void)dealloc;
-(PKPaletteKeyboardButton *)keyboardButton;
-(PKPaletteButton *)returnKeyButton;
-(long long)palettePosition;
-(CGRect)paletteHostingWindowSceneBounds;
-(void)setAdjustedWindowSceneBounds:(CGRect)arg1 ;
-(BOOL)isPaletteVisible;
-(CGRect)adjustedWindowSceneBounds;
-(void)moreOptionsViewControllerDidToggleAutoHide:(id)arg1 ;
-(void)moreOptionsViewControllerDidToggleFingerDraws:(id)arg1 ;
-(void)moreOptionsViewControllerDidSelectTapToRadar:(id)arg1 ;
-(void)moreOptionsViewControllerDidSelectOpenPencilSettings:(id)arg1 ;
-(void)setPaletteVisible:(BOOL)arg1 animated:(BOOL)arg2 completion:(/*^block*/id)arg3 ;
-(PKUCBPaletteView *)_paletteView;
-(void)floatingKeyboardController:(id)arg1 didChangeKeyboardType:(long long)arg2 ;
-(void)floatingKeyboardControllerWillHide:(id)arg1 ;
-(id)responderForFloatingKeyboardController:(id)arg1 ;
-(void)floatingKeyboardControllerWillShow:(id)arg1 ;
-(void)setTapToRadarCommand:(PKPaletteTapToRadarCommand *)arg1 ;
-(PKPaletteTapToRadarCommand *)tapToRadarCommand;
-(NSLayoutConstraint *)paletteHostViewWidthConstraint;
-(NSLayoutConstraint *)paletteHostViewHeightConstraint;
-(void)setPaletteHostViewWidthConstraint:(NSLayoutConstraint *)arg1 ;
-(void)setPaletteHostViewHeightConstraint:(NSLayoutConstraint *)arg1 ;
-(PKPaletteButton *)redoButton;
-(void)setRedoButton:(PKPaletteButton *)arg1 ;
-(void)_recognitionLocaleIdentifierDidChange:(id)arg1 ;
-(void)setKeyboardButton:(PKPaletteKeyboardButton *)arg1 ;
-(void)setReturnKeyButton:(PKPaletteButton *)arg1 ;
-(void)setFirstResponder:(PKTextInputWindowFirstResponder *)arg1 ;
-(void)installInView:(id)arg1 ;
-(void)_handleTextInputResponderCapabilitiesChanged:(id)arg1 ;
-(void)_handleTextInputReturnKeyStateChanged:(id)arg1 ;
-(void)_handleKeyboard;
-(void)_handleMoreButton:(id)arg1 ;
-(void)_updatePaletteUI;
-(void)_updatePaletteViewTraitCollection;
-(id)_adjustedHorizontalSizeClassTraitCollection;
-(BOOL)_shouldOverridePaletteViewTraitCollectionTo:(id)arg1 ;
-(long long)_adjustedUserInterfaceSizeClass;
-(BOOL)_shouldPaletteUseCompactHorizontalSizeClass;
-(void)set_paletteView:(PKUCBPaletteView *)arg1 ;
-(void)set_hostView:(PKPaletteHostView *)arg1 ;
-(void)_updatePaletteWithDefaultItems;
-(PKPaletteFloatingKeyboardController *)floatingKeyboardController;
-(void)_updatePaletteWithApplicationSpecificItems;
-(void)_updateUndoRedoEnabledState;
-(void)_updateReturnKey;
-(void)_updateTrailingBarButtons;
-(void)_handleUndo;
-(void)_handleRedo;
-(NSArray *)trailingButtonsWithoutReturnKey;
-(NSArray *)trailingButtonsWithReturnKey;
-(PKPaletteInputAssistantButtonProvider *)inputAssistantButtonProvider;
-(void)_presentMoreOptionsPopoverFromButton:(id)arg1 ;
-(void)_openPencilSettings;
-(void)setFloatingKeyboardController:(PKPaletteFloatingKeyboardController *)arg1 ;
-(void)setInputAssistantButtonProvider:(PKPaletteInputAssistantButtonProvider *)arg1 ;
@end
