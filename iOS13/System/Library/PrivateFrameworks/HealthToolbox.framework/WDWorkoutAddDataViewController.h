/*
* Generated on Monday, March 1, 2021 at 2:34:54 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/HealthToolbox.framework/HealthToolbox
*/

#import <HealthToolbox/WDAddDataViewController.h>
#import <libobjc.A.dylib/WDAddDataManualEntrySpinnerDataSource.h>
#import <libobjc.A.dylib/WDAddDataManualEntryItemDelegate.h>

@class NSArray, HKQuantityType, WDAddDataManualEntrySpinner, WDAddDataManualEntryItem, NSString;

@interface WDWorkoutAddDataViewController : WDAddDataViewController <WDAddDataManualEntrySpinnerDataSource, WDAddDataManualEntryItemDelegate> {

	NSArray* _workoutActivityTypePairs;
	HKQuantityType* _distanceType;
	NSArray* _sectionsWithDistance;
	NSArray* _sectionsWithoutDistance;
	WDAddDataManualEntrySpinner* _activityTypeEntryItem;
	WDAddDataManualEntryItem* _distanceEntryItem;
	WDAddDataManualEntryItem* _activeEnergyEntryItem;
	WDAddDataManualEntryItem* _dateRangeEntryItem;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)dealloc;
-(long long)numberOfSections;
-(id)_totalDistance;
-(id)_totalEnergyBurned;
-(unsigned long long)_selectedActivityType;
-(id)initWithDisplayType:(id)arg1 profile:(id)arg2 unitController:(id)arg3 initialStartDate:(id)arg4 ;
-(long long)numberOfRowsInManualEntrySpinner:(id)arg1 ;
-(id)manualEntrySpinner:(id)arg1 titleForRow:(long long)arg2 ;
-(id)manualEntryItemsForSection:(long long)arg1 ;
-(void)manualEntryItemDidUpdate:(id)arg1 ;
-(void)validateDataWithCompletion:(/*^block*/id)arg1 ;
-(void)saveHKObjectWithCompletion:(/*^block*/id)arg1 ;
-(id)_generateSortedActivityTypes;
-(void)_createEntryItems;
-(void)_updateCurrentDistanceTypeWithActivityType:(unsigned long long)arg1 ;
-(void)unitPreferencesDidChange:(id)arg1 ;
-(long long)_indexOfActivityType:(unsigned long long)arg1 ;
-(id)_activeEnergyDisplayName;
-(id)_distanceDisplayName;
-(id)_unitForDistanceType:(id)arg1 ;
-(id)_quantityFromEntryItem:(id)arg1 unit:(id)arg2 ;
-(id)_displayTypeForIdentifier:(long long)arg1 ;
-(id)_displayTypeForDistanceType:(id)arg1 ;
-(id)_sectionsForDistanceType:(id)arg1 ;
-(unsigned long long)_activityTypeForIndex:(long long)arg1 ;
-(id)_activityTypeDescriptionForIndex:(long long)arg1 ;
@end

