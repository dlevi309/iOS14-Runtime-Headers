/*
* Generated on Thursday, January 14, 2021 at 2:26:59 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/PDFKit.framework/PDFKit
*/

#import <PDFKit/PDFKit-Structs.h>
#import <UIKitCore/UIView.h>
#import <UIKit/UIGestureRecognizerDelegate.h>

@class PDFViewPrivate, PDFDocument, PDFPage, PDFDestination, UIColor, PDFSelection, NSArray, UIView, NSString;

@interface PDFView : UIView <UIGestureRecognizerDelegate> {

	PDFViewPrivate* _private;

}

@property (nonatomic,retain) PDFDocument * document; 
@property (nonatomic,readonly) BOOL canGoToFirstPage; 
@property (nonatomic,readonly) BOOL canGoToLastPage; 
@property (nonatomic,readonly) BOOL canGoToNextPage; 
@property (nonatomic,readonly) BOOL canGoToPreviousPage; 
@property (nonatomic,readonly) BOOL canGoBack; 
@property (nonatomic,readonly) BOOL canGoForward; 
@property (nonatomic,readonly) PDFPage * currentPage; 
@property (nonatomic,readonly) PDFDestination * currentDestination; 
@property (assign,nonatomic) long long displayMode; 
@property (assign,nonatomic) long long displayDirection; 
@property (assign,nonatomic) BOOL displaysPageBreaks; 
@property (assign,nonatomic) UIEdgeInsets pageBreakMargins; 
@property (assign,nonatomic) long long displayBox; 
@property (assign,nonatomic) BOOL displaysAsBook; 
@property (assign,nonatomic) BOOL displaysRTL; 
@property (nonatomic,retain) UIColor * backgroundColor; 
@property (assign,nonatomic) long long interpolationQuality; 
@property (assign,setter=enablePageShadows:,nonatomic) BOOL pageShadowsEnabled; 
@property (nonatomic,readonly) BOOL isUsingPageViewController; 
@property (assign,nonatomic,__weak) id<PDFViewDelegate> delegate; 
@property (assign,nonatomic) double scaleFactor; 
@property (assign,nonatomic) double minScaleFactor; 
@property (assign,nonatomic) double maxScaleFactor; 
@property (assign,nonatomic) BOOL autoScales; 
@property (nonatomic,readonly) double scaleFactorForSizeToFit; 
@property (nonatomic,readonly) BOOL canZoomIn; 
@property (nonatomic,readonly) BOOL canZoomOut; 
@property (nonatomic,retain) PDFSelection * currentSelection; 
@property (nonatomic,copy) NSArray * highlightedSelections; 
@property (nonatomic,readonly) UIView * documentView; 
@property (nonatomic,readonly) NSArray * visiblePages; 
@property (assign,nonatomic) BOOL enableDataDetectors; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(void)EnableAnnotationKit;
-(void)na_setBackgroundImage:(id)arg1 forPage:(id)arg2 ;
-(id)na_documentScrollView;
-(void)copy:(id)arg1 ;
-(void)setGutterWidth:(double)arg1 ;
-(void)highlight:(id)arg1 ;
-(void)setScaleFactor:(double)arg1 ;
-(void)selectAll:(id)arg1 ;
-(void)scrollSelectionToVisible:(id)arg1 ;
-(void)_lookup:(id)arg1 ;
-(double)scaleFactor;
-(double)gutterWidth;
-(void)delete:(id)arg1 ;
-(BOOL)canPerformAction:(SEL)arg1 withSender:(id)arg2 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)removeFromSuperview;
-(id<PDFViewDelegate>)delegate;
-(id)parentViewController;
-(void)goBack:(id)arg1 ;
-(void)setDocument:(PDFDocument *)arg1 ;
-(BOOL)canGoBack;
-(void)setNeedsDisplay;
-(BOOL)canGoForward;
-(void)windowDidResignKey:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(void)goForward:(id)arg1 ;
-(long long)displayMode;
-(void)setBackgroundColor:(UIColor *)arg1 ;
-(id)dragInteraction:(id)arg1 previewForLiftingItem:(id)arg2 session:(id)arg3 ;
-(PDFPage *)currentPage;
-(void)_setupScrollView;
-(void)setBounds:(CGRect)arg1 ;
-(void)setNeedsDisplayInRect:(CGRect)arg1 ;
-(UIColor *)backgroundColor;
-(UIView *)documentView;
-(void)zoomIn:(id)arg1 ;
-(BOOL)canBecomeFirstResponder;
-(void)setDelegate:(id<PDFViewDelegate>)arg1 ;
-(id)previousPage;
-(void)layoutSubviews;
-(void)setFrame:(CGRect)arg1 ;
-(BOOL)shouldAcceptTouch:(id)arg1 ofGestureRecognizer:(id)arg2 ;
-(id)longPressGestureRecognizer;
-(void)addGestureRecognizer:(id)arg1 ;
-(id)tapGestureRecognizer;
-(void)zoomOut:(id)arg1 ;
-(void)beginPDFViewRotation;
-(void)setDisplayMode:(long long)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)endPDFViewRotation;
-(void)clearSelection;
-(id)doubleTapGestureRecognizer;
-(double)mainScreenScale;
-(id)dragInteraction:(id)arg1 itemsForBeginningSession:(id)arg2 ;
-(void)_commonInit;
-(id)nextPage;
-(BOOL)gestureRecognizer:(id)arg1 shouldReceiveTouch:(id)arg2 ;
-(PDFDocument *)document;
-(id)dragInteraction:(id)arg1 itemsForAddingToSession:(id)arg2 withTouchAtPoint:(CGPoint)arg3 ;
-(BOOL)gestureRecognizerShouldBegin:(id)arg1 ;
-(BOOL)gestureRecognizer:(id)arg1 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)arg2 ;
-(void)performAction:(id)arg1 ;
-(void)dealloc;
-(void)setBackgroundImage:(id)arg1 forPage:(id)arg2 ;
-(id)documentScrollView;
-(BOOL)canZoomIn;
-(BOOL)canZoomOut;
-(void)PDFViewWillClickOnLink:(id)arg1 withURL:(id)arg2 ;
-(double)minScaleFactor;
-(void)setMaxScaleFactor:(double)arg1 ;
-(void)setMinScaleFactor:(double)arg1 ;
-(void)enablePageShadows:(BOOL)arg1 ;
-(void)setDisplayDirection:(long long)arg1 ;
-(void)setDisplaysPageBreaks:(BOOL)arg1 ;
-(void)setEnableDataDetectors:(BOOL)arg1 ;
-(PDFDestination *)currentDestination;
-(PDFSelection *)currentSelection;
-(long long)interpolationQuality;
-(void)setInterpolationQuality:(long long)arg1 ;
-(id)activeAnnotation;
-(void)removeControlForAnnotation:(id)arg1 ;
-(void)setActiveAnnotation:(id)arg1 ;
-(long long)displayBox;
-(BOOL)shouldAntiAlias;
-(double)greekingThreshold;
-(double)lineWidthThreshold;
-(id)pageColor;
-(void)setDisplayBox:(long long)arg1 ;
-(void)setShouldAntiAlias:(BOOL)arg1 ;
-(void)setGreekingThreshold:(double)arg1 ;
-(void)setLineWidthThreshold:(double)arg1 ;
-(void)setPageColor:(id)arg1 ;
-(void)setEnableTileUpdates:(BOOL)arg1 ;
-(void)setIsUsingPDFExtensionView:(BOOL)arg1 ;
-(id)pageViewForPageAtIndex:(unsigned long long)arg1 ;
-(void)layoutDocumentView;
-(id)renderingProperties;
-(double)autoScaleFactor;
-(BOOL)autoScales;
-(void)setAutoScales:(BOOL)arg1 ;
-(void)callPageVisibilityDelegateMethod:(int)arg1 forPageView:(id)arg2 atPageIndex:(unsigned long long)arg3 ;
-(void)setCurrentSelection:(PDFSelection *)arg1 ;
-(void)_updateAnnotations;
-(NSArray *)highlightedSelections;
-(CGRect)convertRectToRootView:(CGRect)arg1 fromPageLayer:(id)arg2 ;
-(void)setPageBreakMargins:(UIEdgeInsets)arg1 ;
-(BOOL)isUpdatingSelectionMarkups;
-(unsigned long long)activeMarkupStyle;
-(void)setActiveMarkupStyle:(unsigned long long)arg1 ;
-(void)setCurrentSelection:(id)arg1 updateTextInput:(BOOL)arg2 ;
-(CGRect)convertRect:(CGRect)arg1 fromPage:(id)arg2 ;
-(id)pageForPoint:(CGPoint)arg1 nearest:(BOOL)arg2 ;
-(CGPoint)convertPoint:(CGPoint)arg1 toPage:(id)arg2 ;
-(BOOL)akAnnotationEditingEnabled;
-(void)handleGesture:(unsigned long long)arg1 state:(long long)arg2 location:(CGPoint)arg3 locationOfFirstTouch:(CGPoint)arg4 isIndirectTouch:(BOOL)arg5 ;
-(CGRect)visibleRectForPageView:(id)arg1 ;
-(void)drawPage:(id)arg1 toContext:(CGContextRef)arg2 ;
-(void)drawPagePost:(id)arg1 toContext:(CGContextRef)arg2 ;
-(BOOL)displaysRTL;
-(BOOL)showsScrollIndicators;
-(UIEdgeInsets)pageBreakMargins;
-(double)maxScaleFactor;
-(void)setDisplaysRTL:(BOOL)arg1 ;
-(void)setScrollViewScrollEnabled:(BOOL)arg1 ;
-(CGPoint)convertPoint:(CGPoint)arg1 fromPage:(id)arg2 ;
-(CGRect)rootViewBounds;
-(CGRect)extendedRootViewBounds;
-(CGRect)convertRootViewRect:(CGRect)arg1 toPageLayer:(id)arg2 ;
-(BOOL)flipsTileContents;
-(id)pointerRegionForLocation:(CGPoint)arg1 ;
-(id)PDFLayout;
-(CGRect)extensionViewBoundsInDocument;
-(BOOL)displaysAsBook;
-(void)syncPageIndexToScrollView;
-(id)hitTestForSubviewsOfView:(id)arg1 atLocation:(CGPoint)arg2 withEvent:(id)arg3 ;
-(BOOL)isUsingPageViewController;
-(id)documentViewController;
-(BOOL)displaysBookmarksForPages;
-(void)colorWidgetBackgrounds:(BOOL)arg1 ;
-(void)setForcesTopAlignment:(BOOL)arg1 ;
-(id)akToolbarView;
-(CGRect)convertRect:(CGRect)arg1 toPage:(id)arg2 ;
-(id)akOverlayAdaptor;
-(void)interactWithAnnotation:(id)arg1 ;
-(void)showMarkupMenu:(id)arg1 ;
-(void)goToRect:(CGRect)arg1 onPage:(id)arg2 ;
-(unsigned long long)typeForGestureRecognizer:(id)arg1 ;
-(BOOL)focusOnColumnAtPoint:(CGPoint)arg1 ;
-(void)goToPage:(id)arg1 ;
-(void)documentWasUnlocked;
-(BOOL)enableDataDetectors;
-(long long)displayDirection;
-(UIEdgeInsets)documentMargins;
-(CGRect)normalizedPageBounds:(id)arg1 ;
-(BOOL)displaysPageBreaks;
-(double)extensionViewZoomScale;
-(void)setDocument:(id)arg1 waitDuration:(double)arg2 ;
-(void)_setupPasswordView;
-(void)_removePasswordView;
-(void)setNewPageVisibilityDelegate:(id)arg1 withOldDelegate:(id)arg2 ;
-(void)_releaseDocument;
-(void)performOverlayAdaptorPageVisibilityTrueUpAfterSettingDocument;
-(BOOL)canGoToFirstPage;
-(void)pushDestination:(id)arg1 ;
-(void)goToPageNoPush:(id)arg1 ;
-(unsigned long long)lastPageIndex;
-(BOOL)canGoToLastPage;
-(void)goToDestinationNoPush:(id)arg1 ;
-(void)_goToPage:(id)arg1 animated:(BOOL)arg2 withBackgroundUpdate:(BOOL)arg3 ;
-(void)goToPageNoPush:(id)arg1 animated:(BOOL)arg2 ;
-(BOOL)isRectVisible:(CGRect)arg1 onPage:(id)arg2 ;
-(void)goToDestination:(id)arg1 ;
-(void)_releaseDocumentViewController;
-(void)_setupDocumentViewController;
-(void)_releaseScrollView;
-(void)scrollViewSaysPageMayHaveChanged:(id)arg1 ;
-(void)gestureInit;
-(void)_tileRefresh;
-(void)_updatePasswordView;
-(double)PDFViewWillChangeScaleFactor:(id)arg1 toScale:(double)arg2 ;
-(void)_internalSetScaleFactor:(double)arg1 ;
-(void)_internalSetAutoScaleFactor;
-(double)_unboundAutoScaleFactorForPage:(id)arg1 ;
-(void)performBeep;
-(void)goToNextPage:(id)arg1 ;
-(void)goToPreviousPage:(id)arg1 ;
-(void)goToFirstPage:(id)arg1 ;
-(void)goToLastPage:(id)arg1 ;
-(id)visiblePageViews;
-(void)_findVisiblePages;
-(void)_resizeDisplayView:(id)arg1 ;
-(double)_pageViewHeight:(id)arg1 ;
-(void)setDisplaysAsBook:(BOOL)arg1 ;
-(void)_updateBookmarksForPages;
-(void)_syncPageIndexToScrollView;
-(void)pdfViewDidChangeScale:(id)arg1 ;
-(void)pdfViewDidChangePage:(id)arg1 ;
-(CGAffineTransform)_transformFromPageToPageView:(id)arg1 ;
-(BOOL)_shouldHandleAnnotationAtLocation:(CGPoint)arg1 forGestureType:(unsigned long long)arg2 ;
-(long long)areaOfInterestForPoint:(CGPoint)arg1 ;
-(id)_dragItemsAtLocationInView:(CGPoint)arg1 ;
-(double)_unboundAutoScaleFactorForPageWithSize:(CGSize)arg1 ;
-(void)_updateCurrentPageUsingViewCenter;
-(void)setScaleFactor:(double)arg1 anchorPoint:(CGPoint)arg2 ;
-(id)determineCurrentPage;
-(void)constrainedScrollToPoint:(CGPoint)arg1 ;
-(BOOL)canGoToNextPage;
-(BOOL)canGoToPreviousPage;
-(CGPoint)_scrollOriginForPageTopLeft:(id)arg1 ;
-(void)_scrollVerticalBy:(double)arg1 ;
-(NSArray *)visiblePages;
-(void)_reflectNewPageOn;
-(void)internalForceTileRefresh;
-(void)forceTileRefresh;
-(id)_getDocumentAKController;
-(void)callPageVisibilityDelegateMethodForOverlayAdaptorOnly:(int)arg1 forPageView:(id)arg2 atPageIndex:(unsigned long long)arg3 ;
-(void)positionInternalViews:(id)arg1 ;
-(void)setDocument:(id)arg1 withInitialPageIndex:(unsigned long long)arg2 ;
-(void)goToPage:(id)arg1 animated:(BOOL)arg2 ;
-(void)goToPageWithoutBackgroundUpdate:(id)arg1 ;
-(void)goToSelection:(id)arg1 ;
-(void)setDocumentMargins:(UIEdgeInsets)arg1 ;
-(void)takeBackgroundColorFrom:(id)arg1 ;
-(void)usePageViewController:(BOOL)arg1 withViewOptions:(id)arg2 ;
-(void)_doNotQueryScaleFactor;
-(double)scaleFactorForSizeToFit;
-(long long)areaOfInterestForMouse:(id)arg1 ;
-(void)setCurrentSelection:(id)arg1 animate:(BOOL)arg2 ;
-(void)setHighlightedSelections:(NSArray *)arg1 ;
-(void)takePasswordFrom:(id)arg1 ;
-(void)annotationsChangedOnPage:(id)arg1 ;
-(CGSize)rowSizeForPage:(id)arg1 ;
-(void)enableBackgroundImages:(BOOL)arg1 ;
-(BOOL)backgroundImagesEnabled;
-(id)viewForPage:(id)arg1 ;
-(BOOL)isDrawingAccessibilityNodeType:(int)arg1 ;
-(void)drawAccessibilityNodeType:(int)arg1 enableDrawing:(BOOL)arg2 ;
-(CGAffineTransform)_transformFromPageViewToPage:(id)arg1 ;
-(double)autoScaleFactorForPage:(id)arg1 ;
-(double)autoScaleFactorForPageWithSize:(CGSize)arg1 ;
-(void)_selfDidResize:(id)arg1 ;
-(void)windowDidBecomeKey:(id)arg1 ;
-(CGSize)pageViewSizeForPage:(id)arg1 ;
-(void)_scrollHorizontalBy:(double)arg1 ;
-(void)_scrollByPage:(BOOL)arg1 ;
-(void)hintScrollDirectionHorizontal:(unsigned long long)arg1 andVertical:(unsigned long long)arg2 ;
-(void)setDisplaysBookmarksForPages:(BOOL)arg1 ;
-(void)internalForceAnnotationRefresh;
-(void)highlightPDFRedactions:(BOOL)arg1 ;
-(void)addMarkupWithStyle:(unsigned long long)arg1 fromSelection:(id)arg2 ;
-(BOOL)handleTabInTextWidget:(id)arg1 ;
-(BOOL)handleBackTabInTextWidget:(id)arg1 ;
-(BOOL)PDFKitHandleTabInTextWidget:(id)arg1 ;
-(BOOL)PDFKitHandleBackTabInTextWidget:(id)arg1 ;
-(BOOL)isOverLinkAnnotation:(CGPoint)arg1 ;
-(double)defaultGutterWidth;
-(BOOL)pageShadowsEnabled;
-(void)startEditingTextWidgetAnnotation:(id)arg1 ;
-(void)setAkToolbarViewTintColor:(id)arg1 ;
-(id)akToolbarViewTintColor;
-(void)setAkToolbarViewItemTintColor:(id)arg1 ;
-(id)akToolbarViewItemTintColor;
-(id)akUndoToolbarItem;
-(id)akRedoToolbarItem;
-(void)setAkAnnotationEditingEnabled:(BOOL)arg1 ;
-(void)setShowsScrollIndicators:(BOOL)arg1 ;
-(CGSize)pdfDocumentViewSize;
-(void)updatePDFViewLayout:(CGRect)arg1 scrollViewFrame:(CGRect)arg2 zoomScale:(double)arg3 ;
-(CGRect)mainScreenBounds;
@end
