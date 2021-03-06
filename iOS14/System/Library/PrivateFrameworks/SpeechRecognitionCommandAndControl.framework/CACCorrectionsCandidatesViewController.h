/*
* Generated on Thursday, January 14, 2021 at 2:28:32 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SpeechRecognitionCommandAndControl.framework/SpeechRecognitionCommandAndControl
*/

#import <SpeechRecognitionCommandAndControl/SpeechRecognitionCommandAndControl-Structs.h>
#import <UIKitCore/UIViewController.h>
#import <libobjc.A.dylib/TUICandidateViewDelegate.h>

@protocol CACCCorrectionsCandidatesViewControllerDelegate;
@class NSString, NSArray, UILabel, TUICandidateView, UIView, CACCorrectionsCandidateState, TIKeyboardCandidateSingle;

@interface CACCorrectionsCandidatesViewController : UIViewController <TUICandidateViewDelegate> {

	id<CACCCorrectionsCandidatesViewControllerDelegate> _delegate;
	NSString* _text;
	NSArray* _alternatives;
	NSArray* _emojis;
	UILabel* _titleLabel;
	TUICandidateView* _candidateView;
	TUICandidateView* _secondaryCandidateView;
	UIView* _candidateBackdropView;
	CACCorrectionsCandidateState* _candidateConfiguration;
	TIKeyboardCandidateSingle* _originalTextCandidate;
	NSArray* _allCandidates;

}

@property (nonatomic,retain) UILabel * titleLabel;                                                             //@synthesize titleLabel=_titleLabel - In the implementation block
@property (nonatomic,retain) TUICandidateView * candidateView;                                                 //@synthesize candidateView=_candidateView - In the implementation block
@property (nonatomic,retain) TUICandidateView * secondaryCandidateView;                                        //@synthesize secondaryCandidateView=_secondaryCandidateView - In the implementation block
@property (nonatomic,retain) UIView * candidateBackdropView;                                                   //@synthesize candidateBackdropView=_candidateBackdropView - In the implementation block
@property (nonatomic,retain) CACCorrectionsCandidateState * candidateConfiguration;                            //@synthesize candidateConfiguration=_candidateConfiguration - In the implementation block
@property (nonatomic,retain) TIKeyboardCandidateSingle * originalTextCandidate;                                //@synthesize originalTextCandidate=_originalTextCandidate - In the implementation block
@property (nonatomic,retain) NSArray * allCandidates;                                                          //@synthesize allCandidates=_allCandidates - In the implementation block
@property (assign,nonatomic,__weak) id<CACCCorrectionsCandidatesViewControllerDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,copy) NSString * text;                                                                    //@synthesize text=_text - In the implementation block
@property (nonatomic,copy) NSArray * alternatives;                                                             //@synthesize alternatives=_alternatives - In the implementation block
@property (nonatomic,copy) NSArray * emojis;                                                                   //@synthesize emojis=_emojis - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(UILabel *)titleLabel;
-(void)setTitleLabel:(UILabel *)arg1 ;
-(void)candidateViewDidTapArrowButton:(id)arg1 ;
-(void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4 ;
-(void)candidateView:(id)arg1 didAcceptCandidate:(id)arg2 atIndexPath:(id)arg3 inGridType:(long long)arg4 ;
-(id<CACCCorrectionsCandidatesViewControllerDelegate>)delegate;
-(void)candidateViewWillBeginDragging:(id)arg1 ;
-(void)setText:(NSString *)arg1 ;
-(void)setAlternatives:(NSArray *)arg1 ;
-(void)setDelegate:(id<CACCCorrectionsCandidatesViewControllerDelegate>)arg1 ;
-(CGSize)preferredContentSize;
-(BOOL)_canShowWhileLocked;
-(void)viewDidLoad;
-(NSString *)text;
-(NSArray *)emojis;
-(NSArray *)alternatives;
-(TUICandidateView *)candidateView;
-(void)setCandidateView:(TUICandidateView *)arg1 ;
-(void)closeButtonTapped;
-(id)candidateResultSet;
-(void)updateConfigurations;
-(void)traitCollectionDidChange:(id)arg1 ;
-(void)viewDidLayoutSubviews;
-(void)candidateViewNeedsToExpand:(id)arg1 ;
-(void)dealloc;
-(void)candidateViewSelectionDidChange:(id)arg1 inGridType:(long long)arg2 ;
-(void)setupConfigurations;
-(id)newCandidateKeyWithFrame:(CGRect)arg1 ;
-(void)updateCandidateSet;
-(void)setOriginalTextCandidate:(TIKeyboardCandidateSingle *)arg1 ;
-(void)setAllCandidates:(NSArray *)arg1 ;
-(TIKeyboardCandidateSingle *)originalTextCandidate;
-(void)setEmojis:(NSArray *)arg1 ;
-(TUICandidateView *)secondaryCandidateView;
-(void)setSecondaryCandidateView:(TUICandidateView *)arg1 ;
-(UIView *)candidateBackdropView;
-(void)setCandidateBackdropView:(UIView *)arg1 ;
-(CACCorrectionsCandidateState *)candidateConfiguration;
-(void)setCandidateConfiguration:(CACCorrectionsCandidateState *)arg1 ;
-(NSArray *)allCandidates;
@end

