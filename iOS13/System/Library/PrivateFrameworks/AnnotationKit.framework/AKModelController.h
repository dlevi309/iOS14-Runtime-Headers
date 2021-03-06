/*
* Generated on Monday, March 1, 2021 at 2:32:03 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/AnnotationKit.framework/AnnotationKit
*/


@class AKSparseMutableControllerArray, NSArray;

@interface AKModelController : NSObject {

	AKSparseMutableControllerArray* _mutablePageModelControllers;

}

@property (readonly) NSArray * pageModelControllers; 
-(id)init;
-(NSArray *)pageModelControllers;
-(id)pageModelControllerForAnnotation:(id)arg1 ;
-(id)allSelectedAnnotations;
-(void)deselectAllAnnotations;
-(id)archivedPageModelControllers;
-(id)pageModelControllerForPage:(unsigned long long)arg1 ;
-(void)deleteAllSelectedAnnotations;
-(void)insertObject:(id)arg1 inPageModelControllersAtIndex:(unsigned long long)arg2 ;
-(void)replaceObjectInPageModelControllersAtIndex:(unsigned long long)arg1 withObject:(id)arg2 ;
-(void)insertPageModelControllers:(id)arg1 atIndexes:(id)arg2 ;
-(void)removeObjectFromPageModelControllersAtIndex:(unsigned long long)arg1 ;
-(void)removePageModelControllersAtIndexes:(id)arg1 ;
-(void)replacePageModelControllersAtIndexes:(id)arg1 withPageModelControllers:(id)arg2 ;
-(void)populateFromArchivedPageModelControllers:(id)arg1 ;
@end

