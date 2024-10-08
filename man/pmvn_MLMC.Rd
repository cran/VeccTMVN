% Generated by roxygen2: do not edit by hand
% Please edit documentation in R/pmvn_MLMC.R
\name{pmvn_MLMC}
\alias{pmvn_MLMC}
\title{Applying the multi-level Monte Carlo (MLMC) technique to the pmvn function
The function uses \code{NLevel1 = 1} for \code{m = m2} and the same
exponential tilting parameter as \code{m = m1} to compute one MC estimate.
This MC estimate is used to correct the bias from the Vecchia approximation}
\usage{
pmvn_MLMC(
  lower,
  upper,
  mean,
  locs = NULL,
  covName = "matern15_isotropic",
  covParms = c(1, 0.1, 0),
  m1 = 30,
  m2 = 100,
  sigma = NULL,
  reorder = 0,
  NLevel1 = 12,
  NLevel2 = 10000,
  verbose = FALSE,
  retlog = FALSE,
  ...
)
}
\arguments{
\item{lower}{lower bound vector for TMVN}

\item{upper}{upper bound vector for TMVN}

\item{mean}{MVN mean}

\item{locs}{location (feature) matrix n X d}

\item{covName}{covariance function name from the `GpGp` package}

\item{covParms}{parameters for `covName`}

\item{m1}{the smaller Vecchia conditioning set size for Level 1 MC}

\item{m2}{the bigger Vecchia conditioning set size for Level 2 MC}

\item{sigma}{dense covariance matrix, not needed when `locs` is not null}

\item{reorder}{whether to reorder integration variables. `0` for no,
`1` for FIC-based univariate ordering, `2` for Vecchia-based univariate
ordering, and `3` for the reordering implemented in TruncatedNormal, 
which appeared faster than `2`}

\item{NLevel1}{first level Monte Carlo sample size}

\item{NLevel2}{second level Monte Carlo sample size}

\item{verbose}{verbose or not}

\item{retlog}{TRUE or FALSE for whether to return loglk or not}

\item{...}{could be
m_ord for conditioning set size for reordering}
}
\value{
estimated MVN probability and estimation error
}
\description{
Applying the multi-level Monte Carlo (MLMC) technique to the pmvn function
The function uses \code{NLevel1 = 1} for \code{m = m2} and the same
exponential tilting parameter as \code{m = m1} to compute one MC estimate.
This MC estimate is used to correct the bias from the Vecchia approximation
}
