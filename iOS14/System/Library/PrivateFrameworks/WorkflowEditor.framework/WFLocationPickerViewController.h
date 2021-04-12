/*
* Generated on Thursday, January 14, 2021 at 2:28:50 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/WorkflowEditor.framework/WorkflowEditor
*/

#import <WorkflowEditor/WorkflowEditor-Structs.h>
#import <UIKitCore/UIViewController.h>
#import <UIKit/UISearchBarDelegate.h>
#import <UIKit/UITableViewDelegate.h>
#import <UIKit/UITableViewDataSource.h>
#import <libobjc.A.dylib/MKMapViewDelegate.h>
#import <libobjc.A.dylib/MKMapViewDelegatePrivate.h>
#import <libobjc.A.dylib/HULocationTriggerEditorMapDragRadiusViewDelegate.h>
#import <libobjc.A.dylib/CLLocationManagerDelegate.h>

@protocol WFLocationPickerViewControllerDelegate;
@class WFLocationValue, UISearchBar, UIView, UITableView, MKMapView, HULocationTriggerEditorMapDragRadiusView, NSIndexPath, NSArray, NSLayoutConstraint, MKLocalSearch, CLLocationManager, CLLocation, NSString;

@interface WFLocationPickerViewController : UIViewController <UISearchBarDelegate, UITableViewDelegate, UITableViewDataSource, MKMapViewDelegate, MKMapViewDelegatePrivate, HULocationTriggerEditorMapDragRadiusViewDelegate, CLLocationManagerDelegate> {

	BOOL _allowsTextOnlyLocation;
	BOOL _allowsPickingCurrentLocation;
	BOOL _resolvesCurrentLocationToPlacemark;
	int _currentAppLocationAuthorizationStatus;
	id<WFLocationPickerViewControllerDelegate> _delegate;
	unsigned long long _pickerType;
	WFLocationValue* _value;
	unsigned long long _regionCondition;
	UISearchBar* _searchBar;
	UIView* _dividerView;
	UITableView* _tableView;
	MKMapView* _mapView;
	HULocationTriggerEditorMapDragRadiusView* _dragView;
	NSIndexPath* _selectedIndexPath;
	NSArray* _constraints;
	NSLayoutConstraint* _mapHeightConstraint;
	NSArray* _recents;
	MKLocalSearch* _localSearch;
	NSArray* _localSearchResults;
	CLLocationManager* _locationManager;
	CLLocation* _currentLocation;

}

@property (nonatomic,retain) WFLocationValue * value;                                                 //@synthesize value=_value - In the implementation block
@property (nonatomic,retain) UISearchBar * searchBar;                                                 //@synthesize searchBar=_searchBar - In the implementation block
@property (nonatomic,retain) UIView * dividerView;                                                    //@synthesize dividerView=_dividerView - In the implementation block
@property (nonatomic,retain) UITableView * tableView;                                                 //@synthesize tableView=_tableView - In the implementation block
@property (nonatomic,retain) MKMapView * mapView;                                                     //@synthesize mapView=_mapView - In the implementation block
@property (nonatomic,retain) HULocationTriggerEditorMapDragRadiusView * dragView;                     //@synthesize dragView=_dragView - In the implementation block
@property (nonatomic,retain) NSIndexPath * selectedIndexPath;                                         //@synthesize selectedIndexPath=_selectedIndexPath - In the implementation block
@property (nonatomic,retain) NSArray * constraints;                                                   //@synthesize constraints=_constraints - In the implementation block
@property (nonatomic,retain) NSLayoutConstraint * mapHeightConstraint;                                //@synthesize mapHeightConstraint=_mapHeightConstraint - In the implementation block
@property (nonatomic,copy) NSArray * recents;                                                         //@synthesize recents=_recents - In the implementation block
@property (nonatomic,retain) MKLocalSearch * localSearch;                                             //@synthesize localSearch=_localSearch - In the implementation block
@property (nonatomic,copy) NSArray * localSearchResults;                                              //@synthesize localSearchResults=_localSearchResults - In the implementation block
@property (nonatomic,retain) CLLocationManager * locationManager;                                     //@synthesize locationManager=_locationManager - In the implementation block
@property (assign,nonatomic) int currentAppLocationAuthorizationStatus;                               //@synthesize currentAppLocationAuthorizationStatus=_currentAppLocationAuthorizationStatus - In the implementation block
@property (nonatomic,retain) CLLocation * currentLocation;                                            //@synthesize currentLocation=_currentLocation - In the implementation block
@property (assign,nonatomic,__weak) id<WFLocationPickerViewControllerDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,readonly) unsigned long long pickerType;                                         //@synthesize pickerType=_pickerType - In the implementation block
@property (assign,nonatomic) BOOL allowsTextOnlyLocation;                                             //@synthesize allowsTextOnlyLocation=_allowsTextOnlyLocation - In the implementation block
@property (assign,nonatomic) BOOL allowsPickingCurrentLocation;                                       //@synthesize allowsPickingCurrentLocation=_allowsPickingCurrentLocation - In the implementation block
@property (assign,nonatomic) unsigned long long regionCondition;                                      //@synthesize regionCondition=_regionCondition - In the implementation block
@property (assign,nonatomic) BOOL resolvesCurrentLocationToPlacemark;                                 //@synthesize resolvesCurrentLocationToPlacemark=_resolvesCurrentLocationToPlacemark - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)viewDidAppear:(BOOL)arg1 ;
-(CLLocation *)currentLocation;
-(void)tableView:(id)arg1 willDisplayCell:(id)arg2 forRowAtIndexPath:(id)arg3 ;
-(void)updateViewConstraints;
-(NSArray *)constraints;
-(UISearchBar *)searchBar;
-(void)setConstraints:(NSArray *)arg1 ;
-(void)setLocationManager:(CLLocationManager *)arg1 ;
-(CLLocationManager *)locationManager;
-(void)setSearchBar:(UISearchBar *)arg1 ;
-(void)locationManager:(id)arg1 didUpdateLocations:(id)arg2 ;
-(void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2 ;
-(id<WFLocationPickerViewControllerDelegate>)delegate;
-(UITableView *)tableView;
-(void)setMapHeightConstraint:(NSLayoutConstraint *)arg1 ;
-(NSLayoutConstraint *)mapHeightConstraint;
-(NSArray *)localSearchResults;
-(id)circularRegion;
-(void)viewWillDisappear:(BOOL)arg1 ;
-(void)viewWillAppear:(BOOL)arg1 ;
-(void)locationManagerDidChangeAuthorization:(id)arg1 ;
-(void)setMapView:(MKMapView *)arg1 ;
-(void)mapView:(id)arg1 regionWillChangeAnimated:(BOOL)arg2 ;
-(void)mapView:(id)arg1 regionDidChangeAnimated:(BOOL)arg2 ;
-(void)setCurrentLocation:(CLLocation *)arg1 ;
-(HULocationTriggerEditorMapDragRadiusView *)dragView;
-(void)cancel:(id)arg1 ;
-(long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2 ;
-(UIView *)dividerView;
-(void)setDividerView:(UIView *)arg1 ;
-(id)mapView:(id)arg1 rendererForOverlay:(id)arg2 ;
-(void)done:(id)arg1 ;
-(void)mapViewDidChangeVisibleRegion:(id)arg1 ;
-(void)setValue:(WFLocationValue *)arg1 ;
-(void)setDelegate:(id<WFLocationPickerViewControllerDelegate>)arg1 ;
-(void)updateUI;
-(BOOL)hasLocation;
-(void)reloadData;
-(MKLocalSearch *)localSearch;
-(void)setLocalSearch:(MKLocalSearch *)arg1 ;
-(id)mapView:(id)arg1 viewForAnnotation:(id)arg2 ;
-(void)mapView:(id)arg1 didSelectAnnotationView:(id)arg2 ;
-(void)mapView:(id)arg1 didDeselectAnnotationView:(id)arg2 ;
-(NSArray *)recents;
-(void)viewDidDisappear:(BOOL)arg1 ;
-(void)setTableView:(UITableView *)arg1 ;
-(void)setLocalSearchResults:(NSArray *)arg1 ;
-(void)mapRadiusView:(id)arg1 radiusDidChange:(double)arg2 ;
-(SCD_Struct_WF42)mapRadiusView:(id)arg1 boundingMapRectForOverlay:(id)arg2 ;
-(id)mapRadiusView:(id)arg1 overlayForRadius:(double)arg2 ;
-(void)resetSearchResults;
-(void)setDragView:(HULocationTriggerEditorMapDragRadiusView *)arg1 ;
-(void)loadView;
-(void)searchBar:(id)arg1 textDidChange:(id)arg2 ;
-(id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2 ;
-(void)traitCollectionDidChange:(id)arg1 ;
-(void)viewDidLayoutSubviews;
-(void)setRecents:(NSArray *)arg1 ;
-(MKMapView *)mapView;
-(WFLocationValue *)value;
-(void)setSelectedIndexPath:(NSIndexPath *)arg1 ;
-(NSIndexPath *)selectedIndexPath;
-(id)initWithPickerType:(unsigned long long)arg1 value:(id)arg2 ;
-(BOOL)showsMapView;
-(void)updateUIWithValue:(id)arg1 ;
-(void)updateRecentsWithSearchText:(id)arg1 ;
-(BOOL)shouldShowCurrentLocationItem;
-(void)setAllowsPickingCurrentLocation:(BOOL)arg1 ;
-(void)setResolvesCurrentLocationToPlacemark:(BOOL)arg1 ;
-(long long)currentLocationRowIndex;
-(long long)firstRecentRowIndex;
-(long long)lastRecentRowIndex;
-(long long)firstLocalSearchResultRowIndex;
-(void)setupMap;
-(double)mapHeight;
-(void)updateMapHeight;
-(unsigned long long)proximityType;
-(void)displayLocationCoordinate:(CLLocationCoordinate2D)arg1 ;
-(void)getMapItemFromRecentContact:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)getPlacemarkFromLocation:(id)arg1 streetAddress:(id)arg2 completionHandler:(/*^block*/id)arg3 ;
-(id)locationFromRecentContact:(id)arg1 ;
-(void)showMapRegionForCoordinate:(CLLocationCoordinate2D)arg1 radius:(double)arg2 ;
-(void)setRegionCondition:(unsigned long long)arg1 ;
-(void)checkLocationAuthorization;
-(BOOL)hasSufficientLocationAuthorization;
-(void)updateValueWithMapItem:(id)arg1 ;
-(void)updateValueWithRadius:(double)arg1 ;
-(void)setLocationValueWithPlacemark:(id)arg1 ;
-(void)setRegionValueWithPlacemark:(id)arg1 radius:(double)arg2 ;
-(id)overlayWithCenterCoordinate:(CLLocationCoordinate2D)arg1 radius:(double)arg2 ;
-(unsigned long long)pickerType;
-(BOOL)allowsTextOnlyLocation;
-(void)setAllowsTextOnlyLocation:(BOOL)arg1 ;
-(BOOL)allowsPickingCurrentLocation;
-(unsigned long long)regionCondition;
-(BOOL)resolvesCurrentLocationToPlacemark;
-(int)currentAppLocationAuthorizationStatus;
-(void)setCurrentAppLocationAuthorizationStatus:(int)arg1 ;
@end
