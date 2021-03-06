/*
* Generated on Thursday, January 14, 2021 at 2:20:45 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/ContactsUI.framework/ContactsUI
*/

#import <libobjc.A.dylib/CNSharingProfileSectionDataSource.h>

@class CNSharingProfileRowItem, NSArray, NSString;

@interface CNSharingProfileAudienceDataSource : NSObject <CNSharingProfileSectionDataSource> {

	BOOL _shouldShowEveryone;
	unsigned long long _selectedSharingAudience;
	CNSharingProfileRowItem* _selectedItem;
	NSArray* _valuesArray;
	NSArray* _items;

}

@property (assign,nonatomic) BOOL shouldShowEveryone;                                 //@synthesize shouldShowEveryone=_shouldShowEveryone - In the implementation block
@property (nonatomic,retain) NSArray * valuesArray;                                   //@synthesize valuesArray=_valuesArray - In the implementation block
@property (nonatomic,retain) CNSharingProfileRowItem * selectedItem;                  //@synthesize selectedItem=_selectedItem - In the implementation block
@property (nonatomic,retain) NSArray * items;                                         //@synthesize items=_items - In the implementation block
@property (assign,nonatomic) unsigned long long selectedSharingAudience;              //@synthesize selectedSharingAudience=_selectedSharingAudience - In the implementation block
@property (nonatomic,readonly) unsigned long long selectedIndex; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)setItems:(NSArray *)arg1 ;
-(unsigned long long)numberOfItems;
-(NSArray *)items;
-(unsigned long long)selectedIndex;
-(unsigned long long)selectedSharingAudience;
-(CNSharingProfileRowItem *)selectedItem;
-(void)didSelectItemAtIndex:(unsigned long long)arg1 ;
-(void)reloadItems;
-(NSArray *)valuesArray;
-(BOOL)supportsSelection;
-(id)sectionHeaderLabel;
-(id)sectionFooterLabel;
-(id)itemForIndex:(unsigned long long)arg1 ;
-(id)initWithSelectedSharingAudience:(unsigned long long)arg1 ;
-(void)setSelectedSharingAudience:(unsigned long long)arg1 ;
-(BOOL)shouldShowEveryone;
-(unsigned long long)sharingAudienceForItem:(id)arg1 ;
-(unsigned long long)indexForSharingAudience:(unsigned long long)arg1 ;
-(unsigned long long)sharingAudienceForIndex:(unsigned long long)arg1 ;
-(void)setShouldShowEveryone:(BOOL)arg1 ;
-(void)setValuesArray:(NSArray *)arg1 ;
-(void)setSelectedItem:(CNSharingProfileRowItem *)arg1 ;
@end

