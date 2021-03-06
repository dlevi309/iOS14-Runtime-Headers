/*
* Generated on Thursday, January 14, 2021 at 2:24:51 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/VideosUI.framework/VideosUI
*/

#import <VideosUI/VUILibraryShelvesDataSource.h>
#import <libobjc.A.dylib/VUILibraryDataSourceDelegate.h>

@class VUIMediaLibrary, NSMutableArray, NSString;

@interface VUIMPLibraryShelvesDataSource : VUILibraryShelvesDataSource <VUILibraryDataSourceDelegate> {

	VUIMediaLibrary* _mediaLibrary;
	NSMutableArray* _fetchedDataSources;

}

@property (nonatomic,retain) NSMutableArray * fetchedDataSources;              //@synthesize fetchedDataSources=_fetchedDataSources - In the implementation block
@property (nonatomic,retain) VUIMediaLibrary * mediaLibrary;                   //@synthesize mediaLibrary=_mediaLibrary - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)setMediaLibrary:(VUIMediaLibrary *)arg1 ;
-(VUIMediaLibrary *)mediaLibrary;
-(void)dealloc;
-(void)startFetch;
-(void)dataSourceDidFinishFetching:(id)arg1 ;
-(void)_addRentalsUpdateNotificationObserver;
-(void)_removeRentalsUpdateNotificationObserver;
-(id)_dataSourceForShelves;
-(void)_updateRentalShelf;
-(id)initWithValidShelfTypes:(id)arg1 forMediaLibrary:(id)arg2 ;
-(NSMutableArray *)fetchedDataSources;
-(void)setFetchedDataSources:(NSMutableArray *)arg1 ;
@end

