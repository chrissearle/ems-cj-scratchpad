//
//  EMSRetrieverDelegate.h
//  TestRig
//
//  Created by Chris Searle on 12.06.13.
//
//

#import <Foundation/Foundation.h>

@protocol EMSRetrieverDelegate <NSObject>

- (void) finishedConferences:(NSArray *)conferences;

@end
