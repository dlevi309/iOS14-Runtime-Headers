/*
* Generated on Monday, March 1, 2021 at 2:35:50 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Health/FeedItemPlugins/MenstrualCyclesAppPlugin.healthplugin/MenstrualCyclesAppPlugin
*/

#import <UIKit/UICollectionViewDataSource.h>

@interface MenstrualCyclesAppPlugin.CalendarViewDataSource : NSObject <UICollectionViewDataSource> {

	 cellProvider;
	??? calendar;
	 includeSpacerCellsFromFirstWeekday;
	??? startDate;
	??? startComponents;
	??? endDate;
	??? endComponents;

}
-(long long)numberOfSectionsInCollectionView:(id)arg1 ;
-(long long)collectionView:(id)arg1 numberOfItemsInSection:(long long)arg2 ;
-(id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2 ;
-(id)collectionView:(id)arg1 viewForSupplementaryElementOfKind:(id)arg2 atIndexPath:(id)arg3 ;
-(id)init;
@end

