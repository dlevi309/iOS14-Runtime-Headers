/*
* Generated on Thursday, January 14, 2021 at 2:22:17 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
*/

#import <PhotoLibraryServices/PLManagedObject.h>

@class NSString, NSNumber, NSDate;

@interface PLGlobalKeyValue : PLManagedObject

@property (nonatomic,retain) NSString * key; 
@property (assign,nonatomic) short type; 
@property (nonatomic,retain) id<NSSecureCoding> anyValue; 
@property (nonatomic,retain) NSNumber * boolValue; 
@property (nonatomic,retain) NSDate * dateValue; 
@property (nonatomic,retain) NSNumber * doubleValue; 
@property (nonatomic,retain) NSNumber * integerValue; 
@property (nonatomic,retain) NSString * stringValue; 
+(void)_setGlobalValue:(id)arg1 forKeyValue:(id)arg2 managedObjectContext:(id)arg3 ;
+(id)entityName;
+(void)setGlobalValue:(id)arg1 forKey:(id)arg2 managedObjectContext:(id)arg3 ;
+(void)checkTypeForKey:(id)arg1 andValue:(id)arg2 ;
+(id)_fetchGlobalKeyValueForKey:(id)arg1 withManagedObjectContext:(id)arg2 createIfMissing:(BOOL)arg3 ;
+(id)dictionaryWithManagedObjectContext:(id)arg1 ;
+(id)globalValuesForKeys:(id)arg1 managedObjectContext:(id)arg2 ;
+(void)populateWithDictionary:(id)arg1 managedObjectContext:(id)arg2 replaceExisting:(BOOL)arg3 ;
+(id)_globalValueForKeyValue:(id)arg1 ;
+(id)_fetchGlobalKeyValuesForKeys:(id)arg1 withManagedObjectContext:(id)arg2 ;
+(short)typeForKey:(id)arg1 ;
+(void)migrateLocaleIdentifierToGlobalKeyValues:(id)arg1 withPathManager:(id)arg2 ;
+(id)globalValueForKey:(id)arg1 managedObjectContext:(id)arg2 ;
-(BOOL)supportsCloudUpload;
@end

