/*
* Generated on Monday, March 1, 2021 at 2:30:26 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/CoreData.framework/CoreData
*/

#import <libobjc.A.dylib/NSFetchedResultsSectionInfo.h>

@class NSString, NSArray, NSFetchedResultsController;

@interface _NSDefaultSectionInfo : NSObject <NSFetchedResultsSectionInfo> {

	NSFetchedResultsController* _controller;
	NSString* _name;
	NSString* _indexTitle;
	unsigned long long _sectionOffset;
	unsigned long long _numberOfObjects;
	unsigned long long _oldSectionNumber;
	id _sectionObjects;

}

@property (nonatomic,readonly) unsigned long long sectionOffset;                //@synthesize sectionOffset=_sectionOffset - In the implementation block
@property (nonatomic,readonly) unsigned long long sectionNumber; 
@property (assign,nonatomic) unsigned long long oldSectionNumber;               //@synthesize oldSectionNumber=_oldSectionNumber - In the implementation block
@property (nonatomic,readonly) NSString * name;                                 //@synthesize name=_name - In the implementation block
@property (nonatomic,readonly) NSString * indexTitle;                           //@synthesize indexTitle=_indexTitle - In the implementation block
@property (nonatomic,readonly) unsigned long long numberOfObjects;              //@synthesize numberOfObjects=_numberOfObjects - In the implementation block
@property (nonatomic,readonly) NSArray * objects; 
-(void)dealloc;
-(NSString *)name;
-(unsigned long long)indexOfObject:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(NSArray *)objects;
-(void)setController:(id)arg1 ;
-(unsigned long long)sectionOffset;
-(unsigned long long)numberOfObjects;
-(unsigned long long)sectionNumber;
-(NSString *)indexTitle;
-(id)initWithController:(id)arg1 name:(id)arg2 indexTitle:(id)arg3 sectionOffset:(unsigned long long)arg4 ;
-(void)setNumberOfObjects:(unsigned long long)arg1 ;
-(void)setSectionOffset:(unsigned long long)arg1 ;
-(void)setOldSectionNumber:(unsigned long long)arg1 ;
-(void)clearSectionObjectsCache;
-(unsigned long long)oldSectionNumber;
@end
