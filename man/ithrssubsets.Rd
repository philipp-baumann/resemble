% Generated by roxygen2: do not edit by hand
% Please edit documentation in R/rslocal_helpers.R
\name{ithrssubsets}
\alias{ithrssubsets}
\title{iterator that subsets a matrix based on input indices for pls modeling
at each rs-local iteration}
\usage{
ithrssubsets(x, y, group = NULL, indx)
}
\arguments{
\item{x}{an input matrix of predictors}

\item{y}{a response variable}

\item{group}{a variable giving the groups/calsses to which the observations
belong to (used for avoiding pseudo-replication during validation)}

\item{indx}{the indices to retrieve}
}
\value{
an object of \code{class} iterator giving a \code{list} with (a) a
subset of the input matrix with rows re-arranged according to `indx`
}
\description{
internal
}
\details{
this is designed to be used within (parallel) loops to avoid sending
entire matrices to each core. It just sends the subset of that is required.
}
\author{
Leonardo Ramirez-Lopez
}
\keyword{internal}
