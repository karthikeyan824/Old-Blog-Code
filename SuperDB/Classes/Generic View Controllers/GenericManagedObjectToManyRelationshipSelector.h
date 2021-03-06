//
//  GenericManagedObjectToManyRelationshipSelector.h
//  SuperDB
//
//  Created by jeff on 7/14/09.
//  Copyright 2009 Jeff LaMarche. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "AbstractGenericManagedObjectEditor.h"

@interface GenericManagedObjectToManyRelationshipSelector : AbstractGenericManagedObjectEditor <NSFetchedResultsControllerDelegate> {
    NSString                    *relationship;
    NSMutableArray              *selectedObjects;
    BOOL                        allowAdd;
    NSString                    *displayKey;
    NSEntityDescription         *dest;
    NSString                    *layoutFilename;
    
    NSFetchedResultsController  *_fetchedResultsController;
}
@property (nonatomic, retain) NSString *relationship;
@property (nonatomic, retain) NSMutableArray *selectedObjects;
@property BOOL allowAdd;
@property (nonatomic, retain) NSString *displayKey;
@property (nonatomic, retain) NSEntityDescription *dest;
@property (nonatomic, retain) NSString *layoutFilename;
@property (nonatomic, readonly) NSFetchedResultsController *fetchedResultsController;
@end
