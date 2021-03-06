/*
* Generated on Thursday, January 14, 2021 at 2:24:06 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SearchUI.framework/SearchUI
*/


@protocol _MKPlaceViewControllerDelegate <NSObject,UIScrollViewDelegate>
@optional
-(void)placeViewController:(id)arg1 selectCuratedCollection:(id)arg2;
-(void)placeViewController:(id)arg1 requestPasscodeUnlockWithCompletion:(/*^block*/id)arg2;
-(void)placeViewController:(id)arg1 seeAllCollections:(id)arg2 usingTitle:(id)arg3 usingCollectionIds:(id)arg4;
-(id)placeViewController:(id)arg1 collectionViewsForPlaceItem:(id)arg2;
-(void)placeViewController:(id)arg1 selectCollectionIdentifier:(id)arg2;
-(id)curatedCollectionSyncCoordinator;
-(void)placeViewControllerDidSelectInlineMap:(id)arg1;
-(void)placeViewControllerDidOpenFullscreenPhotos:(id)arg1;
-(void)placeViewControllerDidCloseFullscreenPhotos:(id)arg1;
-(void)placeViewController:(id)arg1 didSelectParent:(id)arg2;
-(void)placeViewController:(id)arg1 didSelectPhotoToReport:(id)arg2 withPhotoGalleryViewController:(id)arg3;
-(void)placeViewController:(id)arg1 showRelatedMapItems:(id)arg2 withTitle:(id)arg3 originalMapItem:(id)arg4 analyticsDelegate:(id)arg5;
-(id)placeViewController:(id)arg1 viewsForMapItems:(id)arg2 prefersAddressOverCategory:(BOOL)arg3;
-(void)placeViewController:(id)arg1 getRemainingQuickLinksBlock:(/*^block*/id)arg2;
-(void)placeViewController:(id)arg1 didSelectActivityOfType:(id)arg2 completed:(BOOL)arg3;
-(void)placeViewControllerDidSelectShareLocation:(id)arg1;
-(id)activityViewControllerForPlaceViewController:(id)arg1;
-(long long)overriddenInterfaceStyleForPlaceViewControllerSubviews:(id)arg1;
-(id)traitsForPlaceViewController:(id)arg1;
-(void)placeViewController:(id)arg1 didRequestSceneActivationForPhotoGalleryViewController:(id)arg2;
-(double)placeViewControllerPlaceCardHeaderTitleTrailingConstant:(id)arg1;
-(void)placeViewController:(id)arg1 didSelectRouteToCurrentSearchResultWithTransportTypePreference:(id)arg2;
-(int)mapTypeForPlaceViewController:(id)arg1;
-(void)placeViewController:(id)arg1 didSelectShareCurrentLocationWithCompletion:(/*^block*/id)arg2;
-(void)placeViewControllerContactsDidComplete:(id)arg1;
-(void)placeViewController:(id)arg1 showTransitIncidents:(id)arg2;
-(void)placeViewController:(id)arg1 didSelectTransitConnectionInformation:(id)arg2;
-(void)placeViewController:(id)arg1 didSelectDepartureSequence:(id)arg2 mapItem:(id)arg3;
-(BOOL)placeViewController:(id)arg1 canSelectDepartureSequence:(id)arg2 mapItem:(id)arg3;
-(void)placeViewController:(id)arg1 didSelectTransitLine:(id)arg2;
-(void)placeViewControllerDidSelectReportAProblem:(id)arg1 fromView:(id)arg2;
-(void)placeViewControllerDidSelectAddToContacts:(id)arg1;
-(void)placeViewControllerPresentContactsController:(id)arg1;
-(void)placeViewControllerDidSelectAddAPlace:(id)arg1;
-(void)placeViewControllerDidSelectAddToCollection:(id)arg1 sourceView:(id)arg2 sourceRect:(CGRect)arg3;
-(void)placeViewControllerDidSelectAddShortcut:(id)arg1;
-(void)placeViewControllerDidSelectRemoveShortcut:(id)arg1;
-(void)placeViewControllerDidSelectRefineLocation:(id)arg1;
-(void)placeViewControllerDidSelectChangeAddress:(id)arg1;
-(void)placeViewControllerDidRequestInformedConsentForAddingContributions:(id)arg1;
-(void)placeViewControllerDidRequestCopy:(id)arg1;
-(void)placeViewController:(id)arg1 didSelectAddNewPhotoWithPresentingViewController:(id)arg2 progressObserver:(id)arg3 sourceView:(id)arg4;
-(void)placeViewControllerDidSelectSeeMorePhotos:(id)arg1;
-(void)placeViewControllerDidSelectRemoveMarker:(id)arg1;
-(void)placeViewControllerDidSelectShowBrandCard:(id)arg1;
-(void)placeViewController:(id)arg1 enterMuninForMapItem:(id)arg2 muninView:(id)arg3;
-(BOOL)shouldMoveMuninStorefrontViewForPlaceViewController:(id)arg1;
-(void)placeViewControllerLinkedServicesDidTapHeaderButton:(id)arg1;
-(void)placeViewController:(id)arg1 didSelectSearchCategory:(id)arg2;
-(void)placeViewController:(id)arg1 didSelectAddPhotosWithObserver:(id)arg2 sourceView:(id)arg3 shouldAddFromPhotoLibrary:(BOOL)arg4;
-(void)placeViewController:(id)arg1 didSelectEditSubmissionWithObserver:(id)arg2;
-(void)placeViewController:(id)arg1 didSelectAddRatingsWithObserver:(id)arg2 overallState:(long long)arg3;
-(void)placeViewController:(id)arg1 requestsDismissingPresentingViewControllerWithCompletion:(/*^block*/id)arg2;
-(void)placeViewController:(id)arg1 didFinishDismissingViewController:(id)arg2;
-(void)placeViewController:(id)arg1 didSelectRouteToCurrentSearchResultWithMode:(unsigned long long)arg2;
-(void)placeViewControllerDidSelectDisplayedPhoneNumber:(id)arg1;
-(void)placeViewControllerDidSelectDisplayedHomePage:(id)arg1;
-(void)placeViewControllerDidSelectOnePhoto:(id)arg1;
-(void)placeViewControllerDidSelectOneReview:(id)arg1;
-(void)placeViewControllerDidSelectWriteAReview:(id)arg1;
-(void)placeViewControllerDidSelectMoreInfo:(id)arg1;
-(void)placeViewController:(id)arg1 didBecomeContact:(id)arg2;
-(void)placeViewController:(id)arg1 photoGalleryDidScroll:(id)arg2;
-(void)placeViewControllerDidUpdateCallProvider:(id)arg1;
-(BOOL)placeViewController:(id)arg1 shouldOpenHomePage:(id)arg2;
-(void)placeViewControllerDidSelectDisplayedAddress:(id)arg1;
-(void)placeViewControllerDidSelectDropPin:(id)arg1;
-(void)placeViewControllerDidSelectFlyover:(id)arg1;
-(void)placeViewControllerDidDismiss:(id)arg1;
-(void)placeViewControllerDidUpdateHeight:(id)arg1;

@end

