/*
* Generated on Thursday, January 14, 2021 at 2:26:59 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/PDFKit.framework/PDFKit
*/


@protocol AKControllerDelegateProtocol <NSObject>
@optional
-(id)controller:(id)arg1 willSetToolbarItems:(id)arg2;
-(double)modelBaseScaleFactorOfPageAtIndex:(unsigned long long)arg1 forAnnotationController:(id)arg2;
-(void)editCheckpointReachedForAnnotationController:(id)arg1;
-(void)editDetectedForAnnotationController:(id)arg1;
-(void)penStrokeCompletedForAnnotationController:(id)arg1;
-(void)controllerWillShowSignatureCaptureView:(id)arg1;
-(void)controllerWillDismissSignatureCaptureView:(id)arg1;
-(void)controllerWillShowSignatureManagerView:(id)arg1;
-(void)controllerWillDismissSignatureManagerView:(id)arg1;
-(void)controllerWillEnterToolMode:(id)arg1;
-(void)controllerDidEnterToolMode:(id)arg1;
-(void)controllerWillExitToolMode:(id)arg1;
-(void)controllerDidExitToolMode:(id)arg1;
-(void)positionSketchOverlay:(id)arg1 forAnnotationController:(id)arg2;
-(CGRect*)visibleRectOfOverlayAtPageIndex:(unsigned long long)arg1 forAnnotationController:(id)arg2;
-(void)controller:(id)arg1 willPlaceSingleShotAnnotation:(id)arg2 onProposedPageModelController:(id*)arg3;
-(void)controller:(id)arg1 didPlaceSingleShotAnnotation:(id)arg2 onPageModelController:(id)arg3;
-(void)placeAuxiliaryView:(id)arg1 forAnnotationController:(id)arg2;
-(void)removeAuxiliaryView:(id)arg1 forAnnotationController:(id)arg2;
-(BOOL)controllerShouldDetectFormElements:(id)arg1;
-(BOOL)shouldPlaceFormElementAtPoint:(CGPoint)arg1 onOverlayAtPageIndex:(unsigned long long)arg2 forAnnotationController:(id)arg3;
-(BOOL)shouldPlaceProposedFormElementAtRect:(CGRect)arg1 onOverlayAtPageIndex:(unsigned long long)arg2 forAnnotationController:(id)arg3;
-(id)layerContainingQuickBackgroundForLoupeOnOverlayAtPageIndex:(unsigned long long)arg1 forAnnotationController:(id)arg2;
-(void)controllerDidDismissPopover:(id)arg1;
-(void)rotateRight:(id)arg1;
-(void)rotateLeft:(id)arg1;
-(BOOL)requestPermissionForController:(id)arg1 toPerformActionFromSender:(long long)arg2;
-(BOOL)hasHighlightableSelectionForAnnotationController:(id)arg1;
-(void)controller:(id)arg1 performActionForMode:(unsigned long long)arg2 fromSender:(long long)arg3 withAttribute:(long long)arg4 onPageAtIndex:(unsigned long long)arg5;
-(id)highlightableSelectionCharacterIndexesOnPageAtIndex:(unsigned long long)arg1 forAnnotationController:(id)arg2;
-(void)clearHighlightableSelectionForAnnotationController:(id)arg1;
-(void)setAllowsNativeRenderingOfHighlightableSelection:(BOOL)arg1 forAnnotationController:(id)arg2;
-(id)quadPointsForCharacterIndexes:(id)arg1 onPageAtIndex:(unsigned long long)arg2 forAnnotationController:(id)arg3;
-(id)characterIndexesForQuadPoints:(id)arg1 onPageAtIndex:(unsigned long long)arg2 forAnnotationController:(id)arg3;

@required
-(id)undoManagerForAnnotationController:(id)arg1;
-(id)popoverPresentingViewControllerForAnnotationController:(id)arg1;
-(CGPoint*)convertPoint:(CGPoint)arg1 fromOverlayToModelWithPageIndex:(unsigned long long)arg2 forAnnotationController:(id)arg3;
-(CGPoint*)convertPoint:(CGPoint)arg1 fromModelToOverlayWithPageIndex:(unsigned long long)arg2 forAnnotationController:(id)arg3;
-(CGRect*)maxPageRectWithPageIndex:(unsigned long long)arg1 forAnnotationController:(id)arg2;
-(id)newContentSnapshotPDFDataIncludingAdornments:(BOOL)arg1 atScale:(double)arg2 inRect:(CGRect)arg3 onOverlayAtPageIndex:(unsigned long long)arg4 forAnnotationController:(id)arg5;
-(void)installDrawingGestureRecognizer:(id)arg1 forPageAtIndex:(unsigned long long)arg2 forAnnotationController:(id)arg3;
-(void)uninstallDrawingGestureRecognizer:(id)arg1 forPageAtIndex:(unsigned long long)arg2 forAnnotationController:(id)arg3;
-(void)updateDrawingGestureRecognizer:(id)arg1 forPageAtIndex:(unsigned long long)arg2 withPriority:(BOOL)arg3 forAnnotationController:(id)arg4;

@end
