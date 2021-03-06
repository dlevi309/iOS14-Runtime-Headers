/*
* Generated on Thursday, January 14, 2021 at 2:27:09 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/ActionKit.framework/ActionKit
*/

#import <ActionKit/FATObject.h>

@class NSNumber, NSArray;

@interface EDAMNotesMetadataList : FATObject {

	NSNumber* _startIndex;
	NSNumber* _totalNotes;
	NSArray* _notes;
	NSArray* _stoppedWords;
	NSArray* _searchedWords;
	NSNumber* _updateCount;

}

@property (nonatomic,retain) NSNumber * startIndex;                //@synthesize startIndex=_startIndex - In the implementation block
@property (nonatomic,retain) NSNumber * totalNotes;                //@synthesize totalNotes=_totalNotes - In the implementation block
@property (nonatomic,retain) NSArray * notes;                      //@synthesize notes=_notes - In the implementation block
@property (nonatomic,retain) NSArray * stoppedWords;               //@synthesize stoppedWords=_stoppedWords - In the implementation block
@property (nonatomic,retain) NSArray * searchedWords;              //@synthesize searchedWords=_searchedWords - In the implementation block
@property (nonatomic,retain) NSNumber * updateCount;               //@synthesize updateCount=_updateCount - In the implementation block
+(id)structName;
+(id)structFields;
-(NSArray *)notes;
-(NSNumber *)startIndex;
-(void)setNotes:(NSArray *)arg1 ;
-(void)setStartIndex:(NSNumber *)arg1 ;
-(NSNumber *)updateCount;
-(void)setUpdateCount:(NSNumber *)arg1 ;
-(NSNumber *)totalNotes;
-(void)setTotalNotes:(NSNumber *)arg1 ;
-(NSArray *)stoppedWords;
-(void)setStoppedWords:(NSArray *)arg1 ;
-(NSArray *)searchedWords;
-(void)setSearchedWords:(NSArray *)arg1 ;
@end

